/*2.逆康托展开
同样以[2, 3, 4, 1]为例，以说明逆康拓展开的执行方法。这里输入和输出互反，同时，我们还需要输入全排列的字符个数(否则有无穷多个解)。
给定，字符个数 4，字典序序号 10，首先字典序 - 1 得到排在该字典序前的全排列个数，然后：

9 / 3! 结果，商 1 余 3，说明首位要余出一个给 当前没用过的，最小的一个字符，因为它们占据了前 6 个排序。这里 “1” 没有用过，又是最小的字符，因此，我们应当使用 “2” 作为首位，并标记其已经使用。取余数进行下一步操作。
3 / 2! 结果，商 1 余 1，说明第二位要余出一个给 当前没用过的，最小的字符。这里 “1” 没有用过，“2” 已经用了。因此，我们应当使用 “3” 作第二位。
1 / 1! 结果，商 1 余 0，说明第三位要余出一个给 当前没用过的，最小的字符。这里 “1” 没有用过，“2” 已经用了，“3”也用了。因此，我们应当使用 “4” 作第三位。
同康托展开，最后一位无需判断，所有字符中至今未使用的填入即可。
————————————————
版权声明：本文为CSDN博主「ajaxlt」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/ajaxlt/article/details/86544074
*/
//对前 10 个自然数(0 ~ 9)的阶乘存入表
//以免去对其额外的计算
const int fact[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
/**
 * @brief 逆康拓展开
 *
 * @param[in] bits 给定全排列的使用数字个数
 * @param[in] num 给定全排列的次位
 * @param[out] permutation 输出对应的全排列
 */
vector<int> revContor(int bits, int num) {
    num = num - 1; //有 num - 1 个排列比目标序列要小
    vector<bool> vis(bits + 1, false);
    vector<int> permutation(bits, -1);

    int n, residue = num;
    for (int i = 0; i < bits; ++i) {
        n = residue / (fact[bits - i - 1]);
        residue = residue % (fact[bits - i - 1]);

        for (int j = 1; j <= bits; ++j) {
            if (!vis[j] && !(n--)) {
                vis[j] = true;
                permutation[i] = j;
                break;
            }
        }
    }
    return permutation;
}
