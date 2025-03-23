#include <bits/stdc++.h>
using namespace std;

int main()
{
    float lemda, m;
    cout << "Please insert the Wavelength (λ) : ";
    cin >> lemda;
    cout << "Please insert the Order of diffraction (m) : ";
    cin >> m;
    vector<pair<float, int>> v;
    for (int i = 0; i < 3; i++)
    {

        cout << "Please insert the first Slit width a" << i + 1 << " : ";
        float x;
        cin >> x;
        v.push_back({x, i + 1});
    }
    sort(v.begin(), v.end());

    if (lemda < 380 || lemda > 750)
        cout << "Out of range. Please enter a valid Number.";

    else
    {

        float minA = v[0].first;
        if (minA < ((m * lemda) / 1000))

            cout << "Minimum slit differce is invalid. Please enter a valid Number.";

        else
            cout << "The slit that will bend the light most is for slit " << v[0].second << endl
                 << " which value is " << minA << "micrometer";
    }
    // cout << (m * lemda / 1000);

    return 0;
}