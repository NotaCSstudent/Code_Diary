class virtual draggable = object(self) method virtual on_mousedown:
?start:unit Deferred.t -> ?stop:unit Deferred.t -> (int -> int -> unit) -> unit
val virtual mutable x: int val virtual mutable y: int
val mutable dragging = false method dragging = dragging
initializer
self#on_mousedown
(fun mouse_x mouse_y ->
end
let offset_x = x - mouse_x in let offset_y = y - mouse_y in let mouse_up = Ivar.create () in let stop = Ivar.read mouse_up in dragging <- true;
on_mouseup ~stop (fun _ ->
Ivar.fill mouse_up ();
     dragging <- false);
on_mousemove ~stop
(fun ev ->
x <- ev.mouse_x + offset_x; y <- ev.mouse_y + offset_y))
end
