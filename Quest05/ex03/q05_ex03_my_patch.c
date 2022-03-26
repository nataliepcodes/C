/*
created file called a
created file called sw.diff
moved first text to file a, without $>, pressed enter for new line
moved second text to file sw.diff, without $>, pressed enter for new line
entered this command ->  patch -p1 a sw.diff  , p1 is current directory/level the source is in
renamed file a to my_patch with this command -> mv a my_patch
gandalf'ed
*/

/*
Episode V, A NEW H0PE It is a period of civil war
Rebel spaceships, striking from a hidden base, have won their first victory against the evil Galactic Empire. 
During the battle, Rebel spies managed to steal secret plans to the Empire's ultimate weapon, the STAR DEATH, an armored space station with enough power to destroy an entire planet.


Pursued by the Empire's sinister agents,
Princess Mehdi races home aboard her starship, custodian of the stolen plans that can save her people and restore the dictatorship to the galaxie..

*/


/*
Patch transform a file origin to a fixed file applying the transformation or you can called it patch.

Create a file my_patch, so that:

$>diff a my_patch > sw.diff
Use the patch command to apply the patch on file a from the diff sw.diff. :-)

$>cat a
STARWARS
Episode IV, A NEW HOPE It is a period of civil war.

Rebel spaceships, striking from a hidden base, have won their first victory against the evil Galactic Empire.
During the battle, Rebel spies managed to steal secret plans to the Empire's ultimate weapon, the DEATH STAR,
an armored space station with enough power to destroy an entire planet.

Pursued by the Empire's sinister agents, Princess Leia races home aboard her starship, custodian of the stolen plans that can save her people and restore freedom to the galaxy...
$>
$>cat sw.diff
1,2c1,8
< STARWARS
< Episode IV, A NEW HOPE It is a period of civil war.
---
> Episode V, A NEW H0PE It is a period of civil war
> Rebel spaceships, striking from a hidden base, have won their first victory against the evil Galactic Empire. 
> During the battle, Rebel spies managed to steal secret plans to the Empire's ultimate weapon, the STAR DEATH, an armored space station with enough power to destroy an entire planet.
> 
> 
> Pursued by the Empire's sinister agents,
> Princess Mehdi races home aboard her starship, custodian of the stolen plans that can save her people and restore the dictatorship to the galaxie..
> 
4,6d9
< Rebel spaceships, striking from a hidden base, have won their first victory against the evil Galactic Empire.
< During the battle, Rebel spies managed to steal secret plans to the Empire's ultimate weapon, the DEATH STAR,
< an armored space station with enough power to destroy an entire planet.
8d10
< Pursued by the Empire's sinister agents, Princess Leia races home aboard her starship, custodian of the stolen plans that can save her people and restore freedom to the galaxy...
$>
Tips
You will need to use the command patch (man patch)
When you copy both files, make sure to return to the line. (press enter :D)
*/