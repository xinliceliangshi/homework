/*
同余定理
同余定理是数论中的重要概念。给定一个正整数m，如果两个整数a和b满足(a−b)能被m整除，那么我们就称整数a与b对模m同余，记作a≡b(modm)。

自我理解：两个数同时除以m得到的余数相同。

一、同余
定义：设m是大于1的正整数，a,b是整数，如果m|(a−b)，则称a与b关于模m同余，记作a≡b(modm)。

定理1：整数a,b对模m同余的充要条件是a−b能被m整除（即m|a−b）。

推论：a≡b(modm)的充分条件是a=m×t+b(t为整数)。

表示对模m同余关系的式子叫做模m的同余式，简称同余。

定理2：同余关系具有反身性，对称性与传递性，即

a≡a(modm);
若a≡b(modm)，则b≡a(modm)；
若a≡b(modm),b≡c(modm)，则a≡c(modm)。
定理3：若a≡b(modm),c≡d(modm)，则

a+c≡b+d(modm)；
a−c≡b−d(modm);
a×c≡b×d(modm).
对于多个的同模同余式也能进行加减乘运算。对于乘法运算还有一下推论：

推论：若a≡b(modm)，n为自然数，则a×n≡b×n(modm)。

定理4：若c×a≡c×b(modm),(c,m)=d，且a,b为整数，则a≡b(modmd)。

推论：若c×a≡c×b(modm),(c,m)=1，且a,b为整数，则a≡b(modm)。

定理5：若a≡b(modm),a≡b(modn)，则a≡b(mod[m,n])。

推论：若a≡b(modmi),i=1,2,…,n，则a≡b(mod[m1,m2,…,mn])。

定理6：若a≡b(modm),n|m，则a≡b(modn)。

定理7：若a≡b(modm),那么an≡bn(modm)。

同余证一些特殊数的整除特征：

正整数a是9的倍数必须且只须a的各位数码之和是9的倍数。
设a=anan−1…a1a0，11|a的充要条件是11|a0−a1+a2−⋯+(−1)nan。
正整数a能被7整除的条件是a0−a1+a2−⋯+(−1)nan≡0(mod7),这里的a1为三位数（千进制）。
算法应用：

快速乘
快速幂
取模运算
*/