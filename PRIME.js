function prime(n){
   for(let i=3,last=0,j=1;i<n;i+=2){
       let pr=0;
       for(let j=3;j<i;j++){
           if(i%j==0){
               pr=1;
               break;
           }
       }
       if(pr==0){
            //console.log(parseInt((i^1)).toString('2'));
            //console.log(parseInt((i^1)>>1));
            let k = ((i));
            console.log(parseInt(k));
            //console.log(parseInt(((i^1)>>1)-((last^1)>>1)).toString('2'));
            //console.log();
            last = i;
       }
   }
}
prime(500);