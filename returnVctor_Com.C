/*
 *  $Id: returnVctor_Com.C, 2014-12-04 13:17:19 DAMPE $
 *  Author(s):
 *    Chi WANG (chiwang@mail.ustc.edu.cn) 04/12/2014
 *
*/

#include <vector>
#include <map>
#include <iostream>

using namespace std;

std::vector<int> getV(int n){
  std::vector<int> temp;
  for(short i=0;i<n;++i){
    temp.push_back(i*3+1);
    cout<<temp[i]<<"  ";
  }
  cout<<endl;
  return temp;
}

void getMap(map<short,float> &am,int n){
  for(short i=0;i<n;++i){
    float xx=i*3.5+1.3;
    am.insert(std::make_pair<short,float>(i,xx));
    cout<<i<<"  "<<xx<<"\t";
  }
  cout<<endl;
}

void my(int n){
  std::vector<int> holder(getV(n));
  for(short i=0;i<n;++i){
    cout<<holder[i]<<"  ";
  }
  cout<<endl;

  std::map<short,float> holderm;
  getMap(holderm,n+1);
  for(std::map<short,float>::iterator i=holderm.begin();i != holderm.end();++i){
    cout<<i->first<<"  "<<i->second<<"\t";
  }
  cout<<endl;

}

