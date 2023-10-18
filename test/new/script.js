// Custom JavaScript

// Example code for image modal gallery
const images = document.querySelectorAll('.gallery img');
const modal = document.getElementById('modal');
const modalImg = document.getElementById('modal-img');

images.forEach(image => {
  image.addEventListener('click', () => {
    modal.style.display = 'block';
    modalImg.src = image.src;
  });
});

modal.addEventListener('click', () => {
  modal.style.display = 'none';
});
