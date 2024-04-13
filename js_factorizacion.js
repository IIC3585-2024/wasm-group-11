function esPrimo(n) {
  if (n <= 1) {
      return false;
  }
  for (let i = 2; i * i <= n; i++) {
      if (n % i === 0) {
          return false;
      }
  }
  return true;
}

function factorizacionPrima(n) {
  let divisor = 2;
  console.log('js:', n);
  let result = "";

  while (n > 1) {
      if (n % divisor === 0) {
          if (esPrimo(divisor)) {
            result += `${divisor} `;
          }
          n /= divisor;
      } else {
          divisor++;
      }
  }
  return result;
}
