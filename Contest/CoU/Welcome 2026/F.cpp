#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};

// Represent a line by normalized direction and a point
struct Line {
    int dx, dy;  // direction vector (normalized)
    int c;       // ax + by = c where (a,b) perpendicular to direction

    bool operator<(const Line& other) const {
        if (dx != other.dx) return dx < other.dx;
        if (dy != other.dy) return dy < other.dy;
        return c < other.c;
    }
};

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

Line getLine(Point p1, Point p2) {
    int dx = p2.x - p1.x;
    int dy = p2.y - p1.y;

    int g = gcd(dx, dy);
    if (g > 0) {
        dx /= g;
        dy /= g;
    }

    // Normalize direction
    if (dx < 0 || (dx == 0 && dy < 0)) {
        dx = -dx;
        dy = -dy;
    }

    // Line equation: dy * x - dx * y = c
    int c = dy * p1.x - dx * p1.y;

    return {dx, dy, c};
}

int solve() {
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    vector<Point> sensors;

    for (int i = 0; i < n; i++) {
        cin >> grid[i];
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.') {
                sensors.push_back({i, j});
            }
        }
    }

    int k = sensors.size();

    if (k <= 1) return 0;

    // Group segments by their infinite line
    map<Line, vector<pair<int,int>>> lineSegments;

    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < k; j++) {
            Line l = getLine(sensors[i], sensors[j]);
            lineSegments[l].push_back({i, j});
        }
    }

    int maxLines = 0;

    // For each infinite line, we can choose at most (numPoints - 1) segments
    for (map<Line, vector<pair<int,int>>>::iterator it = lineSegments.begin();
         it != lineSegments.end(); ++it) {
        vector<pair<int,int>>& segments = it->second;

        // Find all unique points on this line
        set<int> points;
        for (int i = 0; i < segments.size(); i++) {
            points.insert(segments[i].first);
            points.insert(segments[i].second);
        }

        int numPoints = points.size();
        maxLines += numPoints - 1;
    }

    return maxLines;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        cout << solve() << "\n";
    }

    return 0;
}
