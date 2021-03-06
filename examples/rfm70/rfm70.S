{module, rfm70}.  %% version = 0

{exports, [{module_info,0},{module_info,1},{start,1}]}.

{attributes, []}.

{labels, 90}.


{function, start, 1, 2}.
  {label,1}.
    {line,[{location,"rfm70.erl",13}]}.
    {func_info,{atom,rfm70},{atom,start},1}.
  {label,2}.
    {allocate,1,1}.
    {move,{x,0},{y,0}}.
    {line,[{location,"rfm70.erl",14}]}.
    {call,0,{f,34}}.
    {line,[{location,"rfm70.erl",15}]}.
    {call,0,{f,36}}.
    {line,[{location,"rfm70.erl",16}]}.
    {call,0,{f,39}}.
    {line,[{location,"rfm70.erl",17}]}.
  {label,3}.
    {wait_timeout,{f,3},{integer,100}}.
    timeout.
    {move,{integer,0},{x,0}}.
    {line,[{location,"rfm70.erl",18}]}.
    {call,1,{f,41}}.
    {line,[{location,"rfm70.erl",19}]}.
    {call,0,{f,28}}.
    {bif,self,{f,0},[],{x,0}}.
    {move,{atom,ping},{x,1}}.
    {line,[{location,"rfm70.erl",20}]}.
    send.
    {move,{y,0},{x,0}}.
    {call_last,1,{f,5},1}.


{function, loop, 1, 5}.
  {label,4}.
    {line,[{location,"rfm70.erl",23}]}.
    {func_info,{atom,rfm70},{atom,loop},1}.
  {label,5}.
    {allocate,1,1}.
    {move,{x,0},{y,0}}.
    {line,[{location,"rfm70.erl",24}]}.
  {label,6}.
    {loop_rec,{f,10},{x,0}}.
    {test,is_atom,{f,9},[{x,0}]}.
    {select_val,{x,0},{f,9},{list,[{atom,interrupt},{f,7},{atom,ping},{f,8}]}}.
  {label,7}.
    remove_message.
    {move,{y,0},{x,0}}.
    {line,[{location,"rfm70.erl",29}]}.
    {call,1,{f,14}}.
    {move,{y,0},{x,0}}.
    {call_last,1,{f,5},1}.
  {label,8}.
    remove_message.
    {line,[{location,"rfm70.erl",26}]}.
    {call,0,{f,12}}.
    {move,{y,0},{x,0}}.
    {call_last,1,{f,5},1}.
  {label,9}.
    remove_message.
    {move,{y,0},{x,0}}.
    {call_last,1,{f,5},1}.
  {label,10}.
    {wait,{f,6}}.


{function, handle_ping, 0, 12}.
  {label,11}.
    {line,[{location,"rfm70.erl",35}]}.
    {func_info,{atom,rfm70},{atom,handle_ping},0}.
  {label,12}.
    {allocate,0,0}.
    {move,{literal,"ping"},{x,0}}.
    {line,[{location,"rfm70.erl",37}]}.
    {call,1,{f,21}}.
    {bif,self,{f,0},[],{x,1}}.
    {move,{atom,ping},{x,2}}.
    {move,{integer,1000},{x,0}}.
    {line,[{location,"rfm70.erl",38}]}.
    {call_ext_last,3,{extfunc,erlang,send_after,3},0}.


{function, maybe_receive_frame, 1, 14}.
  {label,13}.
    {line,[{location,"rfm70.erl",40}]}.
    {func_info,{atom,rfm70},{atom,maybe_receive_frame},1}.
  {label,14}.
    {allocate,1,1}.
    {move,{x,0},{y,0}}.
    {move,{integer,7},{x,0}}.
    {line,[{location,"rfm70.erl",42}]}.
    {call,1,{f,47}}.
    {test,is_nonempty_list,{f,16},[{x,0}]}.
    {get_list,{x,0},{x,1},{x,2}}.
    {test,is_nil,{f,16},[{x,2}]}.
    {line,[{location,"rfm70.erl",43}]}.
    {gc_bif,'band',{f,0},2,[{x,1},{integer,64}],{x,0}}.
    {test,is_eq_exact,{f,15},[{x,0},{integer,64}]}.
    {move,{y,0},{x,0}}.
    {call_last,2,{f,18},1}.
  {label,15}.
    {move,{atom,ok},{x,0}}.
    {deallocate,1}.
    return.
  {label,16}.
    {line,[{location,"rfm70.erl",42}]}.
    {badmatch,{x,0}}.


{function, receive_frame, 2, 18}.
  {label,17}.
    {line,[{location,"rfm70.erl",50}]}.
    {func_info,{atom,rfm70},{atom,receive_frame},2}.
  {label,18}.
    {allocate,3,2}.
    {init,{y,0}}.
    {move,{x,0},{y,2}}.
    {move,{integer,96},{x,0}}.
    {move,{x,1},{y,1}}.
    {line,[{location,"rfm70.erl",51}]}.
    {call,1,{f,47}}.
    {test,is_nonempty_list,{f,19},[{x,0}]}.
    {get_list,{x,0},{x,1},{x,2}}.
    {test,is_nil,{f,19},[{x,2}]}.
    {move,{integer,1},{x,2}}.
    {move,{literal,"a"},{x,0}}.
    {line,[{location,"rfm70.erl",52}]}.
    {call,3,{f,51}}.
    {move,{x,0},{y,0}}.
    {move,{literal,[226,0]},{x,0}}.
    {line,[{location,"rfm70.erl",53}]}.
    {call,1,{f,49}}.
    {line,[{location,"rfm70.erl",54}]}.
    {gc_bif,'bor',{f,0},0,[{y,1},{integer,64}],{x,0}}.
    {test_heap,2,1}.
    {put_list,{x,0},nil,{x,1}}.
    {kill,{y,1}}.
    {move,{integer,7},{x,0}}.
    {line,[{location,"rfm70.erl",54}]}.
    {call,2,{f,45}}.
    {move,{y,0},{x,1}}.
    {move,{y,2},{x,0}}.
    {call_last,2,{f,87},3}.
  {label,19}.
    {line,[{location,"rfm70.erl",51}]}.
    {badmatch,{x,0}}.


{function, send_frame, 1, 21}.
  {label,20}.
    {line,[{location,"rfm70.erl",57}]}.
    {func_info,{atom,rfm70},{atom,send_frame},1}.
  {label,21}.
    {allocate,1,1}.
    {move,{x,0},{y,0}}.
    {line,[{location,"rfm70.erl",58}]}.
    {call,0,{f,31}}.
    {test_heap,2,0}.
    {put_list,{integer,176},{y,0},{x,0}}.
    {kill,{y,0}}.
    {line,[{location,"rfm70.erl",60}]}.
    {call,1,{f,49}}.
    {line,[{location,"rfm70.erl",61}]}.
  {label,22}.
    {loop_rec,{f,24},{x,0}}.
    {test,is_eq_exact,{f,23},[{x,0},{atom,interrupt}]}.
    remove_message.
    {move,{atom,ok},{x,0}}.
    {jump,{f,25}}.
  {label,23}.
    {loop_rec_end,{f,22}}.
  {label,24}.
    {wait_timeout,{f,22},{integer,100}}.
    timeout.
    {move,{literal,{error,timeout}},{x,0}}.
  {label,25}.
    {move,{x,0},{y,0}}.
    {move,{integer,7},{x,0}}.
    {line,[{location,"rfm70.erl",67}]}.
    {call,1,{f,47}}.
    {test,is_nonempty_list,{f,26},[{x,0}]}.
    {get_list,{x,0},{x,1},{x,2}}.
    {test,is_nil,{f,26},[{x,2}]}.
    {line,[{location,"rfm70.erl",68}]}.
    {gc_bif,'bor',{f,0},2,[{x,1},{integer,32}],{x,0}}.
    {test_heap,2,2}.
    {put_list,{x,0},nil,{x,1}}.
    {move,{integer,7},{x,0}}.
    {line,[{location,"rfm70.erl",68}]}.
    {call,2,{f,45}}.
    {line,[{location,"rfm70.erl",69}]}.
    {call,0,{f,28}}.
    {move,{y,0},{x,0}}.
    {deallocate,1}.
    return.
  {label,26}.
    {line,[{location,"rfm70.erl",67}]}.
    {badmatch,{x,0}}.


{function, switch_rx, 0, 28}.
  {label,27}.
    {line,[{location,"rfm70.erl",72}]}.
    {func_info,{atom,rfm70},{atom,switch_rx},0}.
  {label,28}.
    {allocate,0,0}.
    {move,{literal,[226,0]},{x,0}}.
    {line,[{location,"rfm70.erl",73}]}.
    {call,1,{f,49}}.
    {move,{integer,24},{x,1}}.
    {move,{integer,0},{x,0}}.
    {line,[{location,"rfm70.erl",74}]}.
    {call_ext,2,{extfunc,lpc_gpio,low,2}}.
    {move,{integer,0},{x,0}}.
    {line,[{location,"rfm70.erl",75}]}.
    {call,1,{f,47}}.
    {test,is_nonempty_list,{f,29},[{x,0}]}.
    {get_list,{x,0},{x,1},{x,2}}.
    {test,is_nil,{f,29},[{x,2}]}.
    {line,[{location,"rfm70.erl",76}]}.
    {gc_bif,'bor',{f,0},2,[{x,1},{integer,1}],{x,0}}.
    {test_heap,2,2}.
    {put_list,{x,0},nil,{x,1}}.
    {move,{integer,0},{x,0}}.
    {line,[{location,"rfm70.erl",76}]}.
    {call,2,{f,45}}.
    {move,{integer,24},{x,1}}.
    {move,{integer,0},{x,0}}.
    {line,[{location,"rfm70.erl",77}]}.
    {call_ext_last,2,{extfunc,lpc_gpio,high,2},0}.
  {label,29}.
    {line,[{location,"rfm70.erl",75}]}.
    {badmatch,{x,0}}.


{function, switch_tx, 0, 31}.
  {label,30}.
    {line,[{location,"rfm70.erl",79}]}.
    {func_info,{atom,rfm70},{atom,switch_tx},0}.
  {label,31}.
    {allocate,0,0}.
    {move,{literal,[225,0]},{x,0}}.
    {line,[{location,"rfm70.erl",80}]}.
    {call,1,{f,49}}.
    {move,{integer,24},{x,1}}.
    {move,{integer,0},{x,0}}.
    {line,[{location,"rfm70.erl",81}]}.
    {call_ext,2,{extfunc,lpc_gpio,low,2}}.
    {move,{integer,0},{x,0}}.
    {line,[{location,"rfm70.erl",82}]}.
    {call,1,{f,47}}.
    {test,is_nonempty_list,{f,32},[{x,0}]}.
    {get_list,{x,0},{x,1},{x,2}}.
    {test,is_nil,{f,32},[{x,2}]}.
    {line,[{location,"rfm70.erl",83}]}.
    {gc_bif,'band',{f,0},2,[{x,1},{integer,254}],{x,0}}.
    {test_heap,2,2}.
    {put_list,{x,0},nil,{x,1}}.
    {move,{integer,0},{x,0}}.
    {line,[{location,"rfm70.erl",83}]}.
    {call,2,{f,45}}.
    {move,{integer,24},{x,1}}.
    {move,{integer,0},{x,0}}.
    {line,[{location,"rfm70.erl",84}]}.
    {call_ext_last,2,{extfunc,lpc_gpio,high,2},0}.
  {label,32}.
    {line,[{location,"rfm70.erl",82}]}.
    {badmatch,{x,0}}.


{function, init_pins, 0, 34}.
  {label,33}.
    {line,[{location,"rfm70.erl",86}]}.
    {func_info,{atom,rfm70},{atom,init_pins},0}.
  {label,34}.
    {allocate,0,0}.
    {move,{integer,24},{x,1}}.
    {move,{integer,0},{x,0}}.
    {line,[{location,"rfm70.erl",87}]}.
    {call_ext,2,{extfunc,lpc_gpio,output,2}}.
    {move,{integer,23},{x,1}}.
    {move,{integer,0},{x,0}}.
    {line,[{location,"rfm70.erl",88}]}.
    {call_ext,2,{extfunc,lpc_gpio,output,2}}.
    {move,{integer,1},{x,1}}.
    {move,{integer,0},{x,0}}.
    {line,[{location,"rfm70.erl",89}]}.
    {call_ext,2,{extfunc,lpc_gpio,input,2}}.
    {move,{integer,1},{x,1}}.
    {move,{atom,falling},{x,2}}.
    {move,{integer,0},{x,0}}.
    {line,[{location,"rfm70.erl",90}]}.
    {call_ext,3,{extfunc,lpc_gpio,interrupt,3}}.
    {move,{integer,8000000},{x,0}}.
    {line,[{location,"rfm70.erl",91}]}.
    {call_ext_last,1,{extfunc,lpc_spi,init,1},0}.


{function, init_bank0, 0, 36}.
  {label,35}.
    {line,[{location,"rfm70.erl",93}]}.
    {func_info,{atom,rfm70},{atom,init_bank0},0}.
  {label,36}.
    {allocate,0,0}.
    {move,{integer,0},{x,0}}.
    {line,[{location,"rfm70.erl",94}]}.
    {call,1,{f,41}}.
    {line,[{location,"rfm70.erl",96}]}.
    {call,0,{f,53}}.
    {line,[{location,"rfm70.erl",96}]}.
    {call,1,{f,83}}.
    {line,[{location,"rfm70.erl",98}]}.
    {call,0,{f,57}}.
    {line,[{location,"rfm70.erl",98}]}.
    {call,1,{f,79}}.
    {move,{integer,29},{x,0}}.
    {line,[{location,"rfm70.erl",100}]}.
    {call,1,{f,47}}.
    {test,is_eq_exact,{f,37},[{x,0},{literal,[0]}]}.
    {move,{literal,"Ps"},{x,0}}.
    {line,[{location,"rfm70.erl",102}]}.
    {call,1,{f,49}}.
  {label,37}.
    {line,[{location,"rfm70.erl",107}]}.
    {call,0,{f,55}}.
    {call_last,1,{f,75},0}.


{function, init_bank1, 0, 39}.
  {label,38}.
    {line,[{location,"rfm70.erl",110}]}.
    {func_info,{atom,rfm70},{atom,init_bank1},0}.
  {label,39}.
    {allocate,0,0}.
    {move,{integer,1},{x,0}}.
    {line,[{location,"rfm70.erl",111}]}.
    {call,1,{f,41}}.
    {line,[{location,"rfm70.erl",112}]}.
    {call,0,{f,59}}.
    {call_last,1,{f,71},0}.


{function, bank, 1, 41}.
  {label,40}.
    {line,[{location,"rfm70.erl",114}]}.
    {func_info,{atom,rfm70},{atom,bank},1}.
  {label,41}.
    {allocate,1,1}.
    {move,{x,0},{y,0}}.
    {move,{integer,7},{x,0}}.
    {line,[{location,"rfm70.erl",115}]}.
    {call,1,{f,47}}.
    {test,is_nonempty_list,{f,43},[{x,0}]}.
    {get_list,{x,0},{x,1},{x,2}}.
    {line,[{location,"rfm70.erl",116}]}.
    {gc_bif,'bsr',{f,0},3,[{x,1},{integer,7}],{x,0}}.
    {test,is_eq_exact,{f,42},[{x,0},{y,0}]}.
    {move,{atom,ok},{x,0}}.
    {deallocate,1}.
    return.
  {label,42}.
    {trim,1,0}.
    {move,{literal,"PS"},{x,0}}.
    {line,[{location,"rfm70.erl",120}]}.
    {call,1,{f,49}}.
    {move,{atom,ok},{x,0}}.
    {deallocate,0}.
    return.
  {label,43}.
    {line,[{location,"rfm70.erl",115}]}.
    {badmatch,{x,0}}.


{function, register_write, 2, 45}.
  {label,44}.
    {line,[{location,"rfm70.erl",124}]}.
    {func_info,{atom,rfm70},{atom,register_write},2}.
  {label,45}.
    {line,[{location,"rfm70.erl",125}]}.
    {gc_bif,'bor',{f,0},2,[{integer,32},{x,0}],{x,0}}.
    {test_heap,2,2}.
    {put_list,{x,0},{x,1},{x,0}}.
    {call_only,1,{f,49}}.


{function, register_read, 1, 47}.
  {label,46}.
    {line,[{location,"rfm70.erl",128}]}.
    {func_info,{atom,rfm70},{atom,register_read},1}.
  {label,47}.
    {line,[{location,"rfm70.erl",129}]}.
    {gc_bif,'bor',{f,0},1,[{integer,0},{x,0}],{x,0}}.
    {test_heap,2,1}.
    {put_list,{x,0},nil,{x,0}}.
    {move,{integer,1},{x,2}}.
    {move,{integer,1},{x,1}}.
    {call_only,3,{f,51}}.


{function, rw, 1, 49}.
  {label,48}.
    {line,[{location,"rfm70.erl",132}]}.
    {func_info,{atom,rfm70},{atom,rw},1}.
  {label,49}.
    {allocate,1,1}.
    {move,{x,0},{y,0}}.
    {move,{integer,23},{x,1}}.
    {move,{integer,0},{x,0}}.
    {line,[{location,"rfm70.erl",133}]}.
    {call_ext,2,{extfunc,lpc_gpio,low,2}}.
    {move,{y,0},{x,0}}.
    {kill,{y,0}}.
    {line,[{location,"rfm70.erl",134}]}.
    {call,1,{f,68}}.
    {move,{x,0},{y,0}}.
    {move,{integer,23},{x,1}}.
    {move,{integer,0},{x,0}}.
    {line,[{location,"rfm70.erl",135}]}.
    {call_ext,2,{extfunc,lpc_gpio,high,2}}.
    {move,{y,0},{x,0}}.
    {deallocate,1}.
    return.


{function, rw, 3, 51}.
  {label,50}.
    {line,[{location,"rfm70.erl",138}]}.
    {func_info,{atom,rfm70},{atom,rw},3}.
  {label,51}.
    {allocate,2,3}.
    {move,{x,0},{y,0}}.
    {move,{x,1},{x,0}}.
    {move,{integer,0},{x,1}}.
    {move,{x,2},{y,1}}.
    {line,[{location,"rfm70.erl",139}]}.
    {call_ext,2,{extfunc,lists,duplicate,2}}.
    {move,{x,0},{x,1}}.
    {move,{y,0},{x,0}}.
    {kill,{y,0}}.
    {line,[{location,"rfm70.erl",139}]}.
    {call_ext,2,{extfunc,erlang,'++',2}}.
    {move,{x,0},{y,0}}.
    {move,{integer,23},{x,1}}.
    {move,{integer,0},{x,0}}.
    {line,[{location,"rfm70.erl",140}]}.
    {call_ext,2,{extfunc,lpc_gpio,low,2}}.
    {move,{y,0},{x,0}}.
    {kill,{y,0}}.
    {line,[{location,"rfm70.erl",141}]}.
    {call,1,{f,65}}.
    {move,{x,0},{y,0}}.
    {move,{integer,23},{x,1}}.
    {move,{integer,0},{x,0}}.
    {line,[{location,"rfm70.erl",142}]}.
    {call_ext,2,{extfunc,lpc_gpio,high,2}}.
    {move,{y,0},{x,1}}.
    {move,{y,1},{x,0}}.
    {line,[{location,"rfm70.erl",143}]}.
    {call_ext_last,2,{extfunc,lists,nthtail,2},2}.


{function, bank0, 0, 53}.
  {label,52}.
    {line,[{location,"rfm70.erl",149}]}.
    {func_info,{atom,rfm70},{atom,bank0},0}.
  {label,53}.
    {move,{literal,[{0,[31]},
                    {1,"?"},
                    {2,"?"},
                    {3,[3]},
                    {4,[0]},
                    {5,[5]},
                    {6,[7]},
                    {7,[0]},
                    {8,[0]},
                    {12,"�"},
                    {13,"�"},
                    {14,"�"},
                    {15,"�"},
                    {17," "},
                    {18," "},
                    {19," "},
                    {20," "},
                    {21," "},
                    {22," "},
                    {23,[0]}]},
          {x,0}}.
    return.


{function, dynamic_payload, 0, 55}.
  {label,54}.
    {line,[{location,"rfm70.erl",171}]}.
    {func_info,{atom,rfm70},{atom,dynamic_payload},0}.
  {label,55}.
    {move,{literal,[{28,"?"},{29,[7]}]},{x,0}}.
    return.


{function, addresses, 0, 57}.
  {label,56}.
    {line,[{location,"rfm70.erl",175}]}.
    {func_info,{atom,rfm70},{atom,addresses},0}.
  {label,57}.
    {move,{literal,[{10,[52,67,16,16,1]},{11,"9876�"},{16,[52,67,16,16,1]}]},
          {x,0}}.
    return.


{function, bank1, 0, 59}.
  {label,58}.
    {line,[{location,"rfm70.erl",181}]}.
    {func_info,{atom,rfm70},{atom,bank1},0}.
  {label,59}.
    {move,{literal,[{0,[64,75,1,226]},
                    {1,[192,75,0,0]},
                    {2,[208,252,140,2]},
                    {3,[153,0,57,65]},
                    {4,[217,150,130,27]},
                    {5,[36,6,127,166]},
                    {12,[0,18,115,0]},
                    {13,[70,180,128,0]},
                    {14,[65,32,8,4,129,32,207,247,254,255,255]}]},
          {x,0}}.
    return.


{function, module_info, 0, 61}.
  {label,60}.
    {line,[]}.
    {func_info,{atom,rfm70},{atom,module_info},0}.
  {label,61}.
    {move,{atom,rfm70},{x,0}}.
    {line,[]}.
    {call_ext_only,1,{extfunc,erlang,get_module_info,1}}.


{function, module_info, 1, 63}.
  {label,62}.
    {line,[]}.
    {func_info,{atom,rfm70},{atom,module_info},1}.
  {label,63}.
    {move,{x,0},{x,1}}.
    {move,{atom,rfm70},{x,0}}.
    {line,[]}.
    {call_ext_only,2,{extfunc,erlang,get_module_info,2}}.


{function, '-rw/3-lc$^0/1-0-', 1, 65}.
  {label,64}.
    {line,[{location,"rfm70.erl",141}]}.
    {func_info,{atom,rfm70},{atom,'-rw/3-lc$^0/1-0-'},1}.
  {label,65}.
    {test,is_nonempty_list,{f,66},[{x,0}]}.
    {allocate,1,1}.
    {get_list,{x,0},{x,0},{y,0}}.
    {line,[{location,"rfm70.erl",141}]}.
    {call_ext,1,{extfunc,lpc_spi,rw,1}}.
    {move,{x,0},{x,1}}.
    {move,{y,0},{x,0}}.
    {move,{x,1},{y,0}}.
    {line,[{location,"rfm70.erl",141}]}.
    {call,1,{f,65}}.
    {test_heap,2,1}.
    {put_list,{y,0},{x,0},{x,0}}.
    {deallocate,1}.
    return.
  {label,66}.
    {test,is_nil,{f,64},[{x,0}]}.
    return.


{function, '-rw/1-lc$^0/1-0-', 1, 68}.
  {label,67}.
    {line,[{location,"rfm70.erl",134}]}.
    {func_info,{atom,rfm70},{atom,'-rw/1-lc$^0/1-0-'},1}.
  {label,68}.
    {test,is_nonempty_list,{f,69},[{x,0}]}.
    {allocate,1,1}.
    {get_list,{x,0},{x,0},{y,0}}.
    {line,[{location,"rfm70.erl",134}]}.
    {call_ext,1,{extfunc,lpc_spi,rw,1}}.
    {move,{x,0},{x,1}}.
    {move,{y,0},{x,0}}.
    {move,{x,1},{y,0}}.
    {line,[{location,"rfm70.erl",134}]}.
    {call,1,{f,68}}.
    {test_heap,2,1}.
    {put_list,{y,0},{x,0},{x,0}}.
    {deallocate,1}.
    return.
  {label,69}.
    {test,is_nil,{f,67},[{x,0}]}.
    return.


{function, '-init_bank1/0-lc$^0/1-0-', 1, 71}.
  {label,70}.
    {line,[{location,"rfm70.erl",112}]}.
    {func_info,{atom,rfm70},{atom,'-init_bank1/0-lc$^0/1-0-'},1}.
  {label,71}.
    {test,is_nonempty_list,{f,73},[{x,0}]}.
    {get_list,{x,0},{x,1},{x,2}}.
    {test,is_tuple,{f,72},[{x,1}]}.
    {test,test_arity,{f,72},[{x,1},2]}.
    {allocate,1,3}.
    {get_tuple_element,{x,1},0,{x,0}}.
    {get_tuple_element,{x,1},1,{x,1}}.
    {move,{x,2},{y,0}}.
    {line,[{location,"rfm70.erl",112}]}.
    {call,2,{f,45}}.
    {move,{x,0},{x,1}}.
    {move,{y,0},{x,0}}.
    {move,{x,1},{y,0}}.
    {line,[{location,"rfm70.erl",112}]}.
    {call,1,{f,71}}.
    {test_heap,2,1}.
    {put_list,{y,0},{x,0},{x,0}}.
    {deallocate,1}.
    return.
  {label,72}.
    {move,{x,2},{x,0}}.
    {call_only,1,{f,71}}.
  {label,73}.
    {test,is_nil,{f,70},[{x,0}]}.
    return.


{function, '-init_bank0/0-lc$^2/1-2-', 1, 75}.
  {label,74}.
    {line,[{location,"rfm70.erl",108}]}.
    {func_info,{atom,rfm70},{atom,'-init_bank0/0-lc$^2/1-2-'},1}.
  {label,75}.
    {test,is_nonempty_list,{f,77},[{x,0}]}.
    {get_list,{x,0},{x,1},{x,2}}.
    {test,is_tuple,{f,76},[{x,1}]}.
    {test,test_arity,{f,76},[{x,1},2]}.
    {allocate,1,3}.
    {get_tuple_element,{x,1},0,{x,0}}.
    {get_tuple_element,{x,1},1,{x,1}}.
    {move,{x,2},{y,0}}.
    {line,[{location,"rfm70.erl",108}]}.
    {call,2,{f,45}}.
    {move,{x,0},{x,1}}.
    {move,{y,0},{x,0}}.
    {move,{x,1},{y,0}}.
    {line,[{location,"rfm70.erl",108}]}.
    {call,1,{f,75}}.
    {test_heap,2,1}.
    {put_list,{y,0},{x,0},{x,0}}.
    {deallocate,1}.
    return.
  {label,76}.
    {move,{x,2},{x,0}}.
    {call_only,1,{f,75}}.
  {label,77}.
    {test,is_nil,{f,74},[{x,0}]}.
    return.


{function, '-init_bank0/0-lc$^1/1-1-', 1, 79}.
  {label,78}.
    {line,[{location,"rfm70.erl",98}]}.
    {func_info,{atom,rfm70},{atom,'-init_bank0/0-lc$^1/1-1-'},1}.
  {label,79}.
    {test,is_nonempty_list,{f,81},[{x,0}]}.
    {get_list,{x,0},{x,1},{x,2}}.
    {test,is_tuple,{f,80},[{x,1}]}.
    {test,test_arity,{f,80},[{x,1},2]}.
    {allocate,1,3}.
    {get_tuple_element,{x,1},0,{x,0}}.
    {get_tuple_element,{x,1},1,{x,1}}.
    {move,{x,2},{y,0}}.
    {line,[{location,"rfm70.erl",98}]}.
    {call,2,{f,45}}.
    {move,{y,0},{x,0}}.
    {call_last,1,{f,79},1}.
  {label,80}.
    {move,{x,2},{x,0}}.
    {call_only,1,{f,79}}.
  {label,81}.
    {test,is_nil,{f,78},[{x,0}]}.
    return.


{function, '-init_bank0/0-lc$^0/1-0-', 1, 83}.
  {label,82}.
    {line,[{location,"rfm70.erl",96}]}.
    {func_info,{atom,rfm70},{atom,'-init_bank0/0-lc$^0/1-0-'},1}.
  {label,83}.
    {test,is_nonempty_list,{f,85},[{x,0}]}.
    {get_list,{x,0},{x,1},{x,2}}.
    {test,is_tuple,{f,84},[{x,1}]}.
    {test,test_arity,{f,84},[{x,1},2]}.
    {allocate,1,3}.
    {get_tuple_element,{x,1},0,{x,0}}.
    {get_tuple_element,{x,1},1,{x,1}}.
    {move,{x,2},{y,0}}.
    {line,[{location,"rfm70.erl",96}]}.
    {call,2,{f,45}}.
    {move,{y,0},{x,0}}.
    {call_last,1,{f,83},1}.
  {label,84}.
    {move,{x,2},{x,0}}.
    {call_only,1,{f,83}}.
  {label,85}.
    {test,is_nil,{f,82},[{x,0}]}.
    return.


{function, '-receive_frame/2-lc$^0/1-0-', 2, 87}.
  {label,86}.
    {line,[{location,"rfm70.erl",55}]}.
    {func_info,{atom,rfm70},{atom,'-receive_frame/2-lc$^0/1-0-'},2}.
  {label,87}.
    {test,is_nonempty_list,{f,88},[{x,0}]}.
    {allocate,2,2}.
    {get_list,{x,0},{x,2},{y,1}}.
    {move,{x,1},{x,0}}.
    {move,{x,2},{x,1}}.
    {move,{x,0},{y,0}}.
    {line,[{location,"rfm70.erl",55}]}.
    {call_fun,1}.
    {move,{x,0},{x,2}}.
    {move,{y,0},{x,1}}.
    {move,{y,1},{x,0}}.
    {move,{x,2},{y,1}}.
    {trim,1,1}.
    {line,[{location,"rfm70.erl",55}]}.
    {call,2,{f,87}}.
    {test_heap,2,1}.
    {put_list,{y,0},{x,0},{x,0}}.
    {deallocate,1}.
    return.
  {label,88}.
    {test,is_nil,{f,89},[{x,0}]}.
    return.
  {label,89}.
    {test_heap,2,1}.
    {put_list,{x,0},nil,{x,1}}.
    {move,{atom,function_clause},{x,0}}.
    {line,[{location,"rfm70.erl",55}]}.
    {call_ext,2,{extfunc,erlang,error,2}}.
