//C++ 代码
void get_primes2(){
    for(int i=2;i<=n;i++){

        if(!st[i]) primes[cnt++]=i;//把素数存起来
        for(int j=i;j<=n;j+=i){//不管是合数还是质数，都用来筛掉后面它的倍数
            st[j]=true;
        }
    }
}

//2.诶氏筛法 O(nloglogn)O(nloglogn)
//C++ 代码
void get_primes1(){
    for(int i=2;i<=n;i++){
        if(!st[i]){
            primes[cnt++]=i;
            for(int j=i;j<=n;j+=i) st[j]=true;//可以用质数就把所有的合数都筛掉；
        }
    }
}

//3.线性筛法 O(n)O(n)
//C++ 代码
void get_primes(){
    //外层从2~n迭代，因为这毕竟算的是1~n中质数的个数，而不是某个数是不是质数的判定
    for(int i=2;i<=n;i++){
        if(!st[i]) primes[cnt++]=i;
        for(int j=0;primes[j]<=n/i;j++){//primes[j]<=n/i:变形一下得到——primes[j]*i<=n,把大于n的合数都筛了就
        //没啥意义了
            st[primes[j]*i]=true;//用最小质因子去筛合数

            //1)当i%primes[j]!=0时,说明此时遍历到的primes[j]不是i的质因子，那么只可能是此时的primes[j]<i的
            //最小质因子,所以primes[j]*i的最小质因子就是primes[j];
            //2)当有i%primes[j]==0时,说明i的最小质因子是primes[j],因此primes[j]*i的最小质因子也就应该是
            //prime[j]，之后接着用st[primes[j+1]*i]=true去筛合数时，就不是用最小质因子去更新了,因为i有最小
            //质因子primes[j]<primes[j+1],此时的primes[j+1]不是primes[j+1]*i的最小质因子，此时就应该
            //退出循环，避免之后重复进行筛选。
            if(i%primes[j]==0) break;
        }
    }

}
