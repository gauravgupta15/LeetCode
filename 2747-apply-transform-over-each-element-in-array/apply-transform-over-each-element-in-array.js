/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    for(let i=0; i<arr.length; i++) {
        let val = fn(arr[i],i);
        arr[i]=val;
    }
    return arr;
};