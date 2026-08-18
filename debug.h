#pragma once
#include <bits/stdc++.h>
using namespace std;

template<class c> struct rge { c b, e; };
template<class c> rge<c> range(c i, c j) { return {i, j}; }
template<class c> auto dud(c* x) -> decltype(cerr << *x, 0);
template<class c> char dud(...);

struct debug {
#ifndef ONLINE_JUDGE
    ~debug() { cerr << '\n'; }
    
    template<class c>
    typename enable_if<sizeof dud<c>(0) != 1, debug&>::type
    operator<<(const c& x) {
        cerr << boolalpha << x;
        return *this;
    }
    
    template<class c>
    typename enable_if<sizeof dud<c>(0) == 1, debug&>::type
    operator<<(const c& x) {
        return *this << range(begin(x), end(x));
    }
    
    template<class a, class b>
    debug& operator<<(const pair<a, b>& x) {
        return *this << "(" << x.first << ", " << x.second << ")";
    }
    
    template<class c>
    debug& operator<<(rge<c> x) {
        *this << "[";
        for (auto it = x.b; it != x.e; ++it)
            *this << (it == x.b ? "" : ", ") << *it;
        return *this << "]";
    }
#else
    template<class c>
    debug& operator<<(const c&) {
        return *this;
    }
#endif
};

#define dbg(x) debug() << #x << " = " << (x)