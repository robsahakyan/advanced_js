function binarySearchRec(arr,elem,left = 0,right = arr.length - 1) {
    const pointer = Math.floor(right - left / 2 );
    if(elem === arr[pointer]) {
        return pointer
    }
    if(arr[pointer] > elem) {
        right = pointer - 1;
        return binarySearchRec(arr,elem,0,right)
    }
    if(arr[pointer] < elem) {
        return binarySearchRec(arr,elem,pointer,right)
    }        
}
let arr = [1,2,4,5,9,20,25,87];
function binarySearchIter(arr,elem) {
    let start = 0;
    let end = arr.length - 1;
    for (let i = Math.floor((start + end) / 2); i < arr.length; i = Math.floor((start + end) / 2)) {
        console.log(start)
        if (arr[i] === elem) {
            return i;
        }
        if (arr[i] > elem) {
            end = (start + end) / 2;
        } else {
            start = i + 1;
        }
    }
}

