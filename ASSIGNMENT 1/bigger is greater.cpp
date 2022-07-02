string biggerIsGreater(string s) {
     if (next_permutation(s.begin(), s.end()))
      return s.c_str();
        else
        return "no answer";

}
