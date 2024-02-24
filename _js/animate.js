
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
