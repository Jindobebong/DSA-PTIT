       if(!ok) cout << "NO"; 
        else{
            reverse(res.begin(), res.end()); 
            for(int x : res)
                cout << x << " ";
            cout << 1;
        }