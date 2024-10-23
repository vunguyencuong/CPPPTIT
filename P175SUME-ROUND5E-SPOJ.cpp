#include<bits/stdc++.h>
using namespace std;

struct data   // dùng để lưu giá trị i và số lần i  phải lặp 
{
    int value;
    int freq;
    data()
    {
        freq = 1;
    }
};

int main()
{
    int n;
    cin>> n;
    queue<data> q;
    for(int i = 1; i <= 5; i++)
    {
        data b;   // khởi tạo phần tử để push vào queue
        b.value = i;
        q.push(b);
    }
    while(true)
    {
        if(n > q.front().freq) // điều kiện này xảy ra thì mới có thể push phần tử vào cuối queue
        {
            data p = q.front();  // lấy đối tượng đầu tiên ra khỏi queue để xét
            n -= p.freq; // p.freq là số lần push p.value vào queue
            p.freq *= 2; // sau mỗi 1 chu kì push thì freq x2 
            q.pop(); // ta loại bỏ đối tượng của chu kì cũ
            q.push(p); // ta push đối tượng của chu kì mới vào queue
        }
        else // khi n ko đủ để trừ đi số lần push vào queue tại giá trị nào thì giá trị đó sẽ là front của queue
        {
            cout<< q.front().value << endl;
            return 0;
        }
    }
}

1 2 3 4 5
1 1 2 2 3 3 4 4 5 5
