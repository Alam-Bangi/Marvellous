function sumOfFactors(iNo) {
    let iCnt = 1
    let iSum = 0

    for(iCnt = 1; iCnt <= iNo/2; iCnt++) {
        if(iNo % iCnt == 0) {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
function main() {
    let iRet = 0
    iRet = sumOfFactors(12)

    console.log("Sum  of factors are : ",iRet);
}

main()
