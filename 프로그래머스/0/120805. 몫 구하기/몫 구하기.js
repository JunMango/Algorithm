function solution(num1, num2) {
    var answer = 0;
    if(num1<= 100 || num2<=100){
        answer = Math.floor(num1/num2);
    }else{
        answer = 0;
    }
    return answer;
}