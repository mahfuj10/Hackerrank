
	this.insert= function(head,data){
        //complete this method
      let newNode = new Node(data)
      if(head == null || typeof head === 'undefined'){
          head = newNode
      }else if(head.next === null){
          head.next = newNode
      }else{
          let current = head.next
          while(current.next){
              current = current.next
          }
          current.next = newNode
      }
        return head;
  };
  

