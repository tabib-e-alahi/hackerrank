function performOperation(secondInteger, secondDecimal, secondString) {
    const firstInteger = 4;
    const secondInt = parseInt(secondInteger);
    const sum_Int = firstInteger + secondInt;
    
    const firstDecimal = 4.0;
    const secondDeci = parseFloat(secondDecimal);
    const sum_deci = firstDecimal + secondDeci;
    
    const firstString = 'HackerRank ';
    
    console.log(sum_Int);
    console.log(sum_deci);
    console.log(firstString + secondString);
    
}