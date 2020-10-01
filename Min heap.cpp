#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

class min_h{

    int size,rear;
    int  *m_heap;
    public:
    //constructor
    min_h(int s)
    {
        rear=0;
        size=s+1;
        m_heap = new int[s+1];
        *m_heap=0;
    }

    void perculate_up(int child_ind)
    {
        if(child_ind>1)
        {
            if(*(m_heap+child_ind/2)>*(m_heap+child_ind))
            {
                swap((m_heap+child_ind/2),(m_heap+child_ind));
                perculate_up(child_ind/2);
            }
        }
    }

    void insert(int val)
    {
        if(rear<size)
        {
            ++rear;
            *(m_heap+rear) = val;
            perculate_up(rear);
        }
        else
        {
            cout<<"heap is full right now. cannot add more elements\n";
        }
    }

    void print_heap()
    {
        for(int i=1;i<size;++i)
            cout<<*(m_heap+i)<<" ";
    }

};


int main()
{
    //max_h <int> maxheap;
    min_h tree(13);
    tree.insert(35);
    tree.insert(33);
    tree.insert(42);
    tree.insert(10);
    tree.insert(14);
    tree.insert(19);
    tree.insert(27);
    tree.insert(44);
    tree.insert(26);
    tree.insert(31);
    tree.insert(8);
    tree.insert(5);
    tree.insert(50);
    tree.print_heap();
}