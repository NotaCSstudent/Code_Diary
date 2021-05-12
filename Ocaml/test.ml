let x = 3+4;;
let y = 2+1;;
let square x = x*x;;
square 2;;
square 3;;
let is_a_multiple x y = x mod y = 0;;
let increments = [(fun x -> x +1); (fun x -> x+2)];;
let plusone = (fun x -> x + 1);;
let abs_deff x y = abs(x-y);;
let abs_diff = (fun x -> (fun y abs -> abs(x-y)));;


module type X_int = sig val x : int end;;
module Three : X_int = struct let x = 3 end;;

module Four = struct let x = 4 end;;

let to_int m = let module M = (val m : X_int) in M.x;;