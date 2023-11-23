 <!DOCTYPE html>
<html lang="en" dir="ltr">
<head>
<meta charset="utf-8">
<title>GraveYardJokes</title>
<link rel="stylesheet" href="css/styles.css">
<link rel="icon" href="images/favicon.png">
<link rel="preconnect" href="https://fonts.googleapis.com">
<link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
<link href="https://fonts.googleapis.com/css2?family=Josefin+Sans&family=Rock+Salt&family=Saira+Condensed&display=swap" rel="stylesheet">
<link rel="preconnect" href="https://fonts.googleapis.com">
<link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
<link href="https://fonts.googleapis.com/css2?family=Source+Code+Pro&display=swap" rel="stylesheet">
<style>

</style>
<script src="https://kit.fontawesome.com/c4a88884d3.js" crossorigin="anonymous"></script> 
<script src="_js/jquery.min.js"></script> 
<script src="_js/jquery-ui.min.js"></script> 
<script>
$(document).ready(function() {
	$('#dashboard').hover(
		function(){
			console.log('mouseEnter');
			$(this).stop().animate(
			{
				left: '0',
				backgroundColor: 'rgb(1,50,32)'
			},
				500,
				'easeInSine'
			); // end animate.
		},
		function(){
			console.log('mouseLeave');
			$(this).stop().animate(
				{
					left:'-92px',
					backgroundColor: 'green'
				},
				1500,
				'easeOutBounce'
			); // end animate
		}
	); // end hover
	$('#dashboard i').hover(
		function(){
			$(this).stop().animate(
				{
					opacity: '1.0'
				},
				200
			); // end animate	
		},
		function(){
			$(this).stop().animate(
				{
					opacity: '0.5'
				},
				300
			);
		}
	); // end hover
	}); // end ready
</script>
</head>
<header>
  <div id="dashboard"><a href="https://www.youtube.com/@GraveYardJokes/videos"><i class="fa-solid fa-music fa-fade fa-2xl"></i></a>  <a href="https://graveyardjokes.itch.io/"><i class="fa-solid fa-gamepad fa-fade fa-2xl"></i></a> <a href="https://www.twitch.tv/graveyardjokes"><i class="fa-solid fa-palette fa-fade fa-2xl"></i></a></div>
</header>
</html>