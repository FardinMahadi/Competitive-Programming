/**
 * Converts an integer to a Roman numeral.
 * Constrainsts: 1 <= num <= 3999
 * @param num
 * @returns string
 */

function intToRoman(num: number): string {
  let ROMAN_NUMERAl_MAP: ReadonlyArray<[string, number]> = [
    ["M", 1000],
    ["CM", 900],
    ["D", 500],
    ["CD", 400],
    ["C", 100],
    ["XC", 90],
    ["L", 50],
    ["XL", 40],
    ["X", 10],
    ["IX", 9],
    ["V", 5],
    ["IV", 4],
    ["I", 1],
  ];

  let result = "";
  let remainingValue = num;

  for (const [symbol, decimalValue] of ROMAN_NUMERAl_MAP) {
    if (remainingValue === 0) break;
    while (remainingValue >= decimalValue) {
      result += symbol;
      remainingValue -= decimalValue;
    }
  }

  return result;
}
