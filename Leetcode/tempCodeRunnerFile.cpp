      for(int i = 1 ; i < temp.size() ; i++){
            if(temp[i][0] == temp[i-1][0]){
                check(temp , i-1 , i) ; 
            }
        }