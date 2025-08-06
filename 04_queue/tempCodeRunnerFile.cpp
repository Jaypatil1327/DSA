
    for(int i = 1 ; i <= half ; i++){
        s.push(q.front()) ; 
        q.pop() ; 
    }

    while(s.size()){
        q.push(s.top()) ; 
        s.pop() ; 
    }

    // step2 : 
    for(int i = 1 ; i <= half ; i++){
        s.push(q.front()) ; 
        q.pop() ; 
    }
    
    while(s.size()) {
        q.push(s.top()) ; 
        q.push(q.front()) ; 
        q.pop() ; 
    }