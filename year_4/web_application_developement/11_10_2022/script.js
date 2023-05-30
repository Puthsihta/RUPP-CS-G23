const d = new Date()
const dateForm =
  ' ថ្ងៃទី ' + d.getDay() + ' ខែ ' + d.getMonth() + ' ឆ្នាំ' + d.getYear()
document.getElementById('date').innerHTML = dateForm
