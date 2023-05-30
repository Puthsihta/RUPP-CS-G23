let imgs = document.querySelectorAll('.album img')
let features = document.querySelector('.cover')
let caption = document.querySelector('#caption')
let i = 1
features.addEventListener('click', function (e) {
  alert('click on ', e)
})
imgs.forEach(function (img, i) {
  img.addEventListener('click', function () {
    features.setAttribute('src', img.getAttribute('src'))
    // document.querySelector(
    //   '.album li:nth-child(' + (i + 1) + ')',
    // ).style.borderLeft = '3px solid rebeccapurple'
  })
})
window.setInterval(() => {
  if (i == 0) {
    document.querySelector('.album li:nth-child(5)').style.borderLeft = 'none'
  } else {
    document.querySelector('.album li:nth-child(' + i + ')').style.borderLeft =
      'none'
  }
  // caption.textContent = imgs[i].getAttribute('alt')
  features.setAttribute('src', imgs[i++].getAttribute('src'))
  document.querySelector('.album li:nth-child(' + i + ')').style.borderLeft =
    '3px solid rebeccapurple'
  if (i == 5) {
    i = 0
  }
}, 1000)
