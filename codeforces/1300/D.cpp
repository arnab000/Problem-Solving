#include <bits/stdc++.h>

using namespace std;



struct Point2D
{
    long double    x;
    long double   y;
};

Point2D compute2DPolygonCentroid(const Point2D* vertices, int vertexCount)
{
    Point2D centroid = {0, 0};
    long double    signedArea = 0.0;
    long double   x0 = 0.0; // Current vertex X
     long double   y0 = 0.0; // Current vertex Y
    long double    x1 = 0.0; // Next vertex X
    long double   y1 = 0.0; // Next vertex Y
    long double    a = 0.0;  // Partial signed area


    int i=0;
    for (i=0; i<vertexCount-1; ++i)
    {
        x0 = vertices[i].x;
        y0 = vertices[i].y;
        x1 = vertices[i+1].x;
        y1 = vertices[i+1].y;
        a = x0*y1 - x1*y0;
        signedArea += a;
        centroid.x += (x0 + x1)*a;
        centroid.y += (y0 + y1)*a;
    }

    // Do last vertex separately to avoid performing an expensive
    // modulus operation in each iteration.
    x0 = vertices[i].x;
    y0 = vertices[i].y;
    x1 = vertices[0].x;
    y1 = vertices[0].y;
    a = x0*y1 - x1*y0;
    signedArea += a;
    centroid.x += (x0 + x1)*a;
    centroid.y += (y0 + y1)*a;

    signedArea *= 0.5;
    centroid.x /= (6.0*signedArea);
    centroid.y /= (6.0*signedArea);

    return centroid;
}

int main(){
    int n;
    cin >> n;
    Point2D poi[n];
             //cout << fixed;
  //cout <<setprecision(11) ;
    for (int i = 0; i < n; i++) {
        cin >> poi[i].x >> poi[i].y;
    }


    Point2D ce = compute2DPolygonCentroid(poi, n);
//cout<<ce.x<<" "<<ce.y<<endl;
vector<pair<long double  ,long double  > >sura;
    map<long double   , long double   > cen;
    for (int i = 0; i < n; i++)
    {   long double   p1,p2;

        //if(ce.x>=0)
        p1=(poi[i].x - ce.x);
        //else
         //   p1=poi[i].x +ce.x;
        // if(ce.y>=0)
        p2=(poi[i].y-ce.y);
       // else
            //p2=poi[i].y + ce.y;


//cout<<p1<<" "<<p2<<endl;

       // cen[p1]=p2;
        sura.push_back({p1,p2});
    }

    bool yes = true;
    for(int p=0;p<n/2;p++){

      // cout<<max(sura[p+n/2].first,sura[p].first)<<" "<<min(sura[p+n/2].first,sura[p].first)<<endl;


        if(  max(sura[p+n/2].first,sura[p].first)+min(sura[p+n/2].first,sura[p].first)>1e-9|| max(sura[p+n/2].second,sura[p].second)+min(sura[p+n/2].second,sura[p].second)>1e-9 )
        {
            yes=false;
        }



    }

    if(yes==true)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;




}
