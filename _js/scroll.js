 document.addEventListener('DOMContentLoaded', function () {
    // Get the button element
    var scrollToBottomBtn = document.getElementById('scrollToBottomBtn');

    // Add click event listener to the button
    scrollToBottomBtn.addEventListener('click', function () {
        // Scroll to the bottom of the page
        window.scrollTo({
            top: document.body.scrollHeight,
            behavior: 'smooth' // Use smooth scrolling if supported
        });
    });
});// JavaScript Document