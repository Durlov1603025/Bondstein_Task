document.addEventListener('DOMContentLoaded', function () {
    var icon = document.getElementById('icon');
    var ul = document.querySelector('nav ul');
    var Links = document.querySelectorAll('nav a');

    // Toggle when the menu bar is clicked
    if (icon) {
        icon.addEventListener('click', function () {
            ul.classList.toggle('toggle');
        });
    }

    // Handle click events for navigation links
    Links.forEach (function (link) {
        link.addEventListener('click', function () {
            // Remove active class from all links
            Links.forEach (function (link) {
                link.classList.remove('active');
            });
            link.classList.add('active');   // Add active class to the clicked link
        });
    });    

});
