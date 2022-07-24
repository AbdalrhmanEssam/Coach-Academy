#includeiostream
#includevector
using namespace std;
int main() {
    int n;
    cinn;
    vectorintv(n);
    for (int i = 0; i n ; ++i) {
        cinv[i];
    }
    vectorintneg,pos,zero;
    for (int i = 0; i n ; ++i) {
        if(v[i]0)
            pos.push_back(v[i]);
        else if(v[i]0)
            neg.push_back(v[i]);
        else zero.push_back(0);
    }
    if(pos.empty()){
        pos.push_back(neg.back());
        neg.pop_back();
        pos.push_back(neg.back());
        neg.pop_back();
    }
    if(neg.size()%2==0){
        zero.push_back(neg.back());
        neg.pop_back();
    }
    coutneg.size()' ';
    for (int i = 0; i neg.size(); ++i)
        coutneg[i]' ';
    cout'n';
    coutpos.size()' ';
    for (int i = 0; i pos.size(); ++i)
        coutpos[i]' ';
    cout'n';
    coutzero.size()' ';
    for (int i = 0; i zero.size(); ++i)
        coutzero[i]' ';
    cout'n';
}