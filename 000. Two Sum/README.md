# 思路(C++)

第一次刷Leetcode，看到一个知乎回答的github库，所以就用这个模板来监督自己OJ。
- 优点是把所有的700多道题都列出来了，这样自己有个目标。
- 同时代码结构包含C++和Python这也解决了我不知道选什么语言的问题。pyhton简洁但是C++实用，这样两边对照着都学应该符合我自己双栖的目标。
- 最后它还自带了Catch的测试库，可以直接本地测试，完美！

LeetCode 现在有 711 道题了，当初我按照从易到难排序也逐步有些过时了。早知道还不如按照编号顺序来解题呢。这样一天容易一天难的，还挺好玩。

----

#0 ：暴力循环匹配
for循环两次，然后遍历所有的两两组合，然后判断是否满足 `a + b = target`，满足返回其下标。

#1：kv结构
这道题有点像找配对。找到 `a`，找到 `b`，让 `a + b = target`。那么肯定得遍历，遍历的过程中，记录什么，成了思考的关键。

既然是配对，那么 kv 结构是非常合适的，于是上了 Hash 表。让 key 就是要找的 `b`，让 value 记录 `a` 的 index，也就是结果需要的索引。


## Python

基本与 C++ 的思路一致，只不过更简洁了。