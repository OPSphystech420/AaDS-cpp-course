<div class="problem-statement">
   <div class="header">
      <h1 class="title">X. Превышение скорости</h1>
      <table>
         <tbody><tr class="time-limit">
            <td class="property-title">Ограничение времени</td>
            <td>1&nbsp;секунда</td>
         </tr>
         <tr class="memory-limit">
            <td class="property-title">Ограничение памяти</td>
            <td>256Mb</td>
         </tr>
         <tr class="input-file">
            <td class="property-title">Ввод</td>
            <td colspan="1">стандартный ввод или input.txt</td>
         </tr>
         <tr class="output-file">
            <td class="property-title">Вывод</td>
            <td colspan="1">стандартный вывод или output.txt</td>
         </tr>
      </tbody></table>
   </div>
   <h2></h2>
   <div class="legend"><span style="">
         <p>Превышение скорости является опасным нарушением, значительно увеличивающим вероятность трагических последствий транспортных
            происшествий. К сожалению контроль скорости с использованием радаров и камер не решает проблему полностью. Притормаживая перед
            камерами, водители едут со значительным превышением на участках дорог, где контроль не ведётся. С целью предотвращения такого
            поведения используется назначение штрафа за гарантирование превышение скорости, основанное на времени проезда дороги.
         </p></span><p>Рассмотрим дорогу, состоящую из <span class="tex-math-text">n</span> участков, пронумерованных от 1 до <span class="tex-math-text">n</span>. Длина <span class="tex-math-text">i</span>-го участка составляет <span class="tex-math-text">l<sub>i</sub></span> метров. На <span class="tex-math-text">i</span>-м из участков установлено ограничение по скорости в <span class="tex-math-text">v<sub>i</sub></span> м/с.
      </p>
      <p>За превышение скорости предусмотрены штрафы. В зависимости от превышения, установлены различные штрафы, величина штрафа вычисляется
         следующим образом.
      </p>
      <p>Пусть <span class="tex-math-text">e</span>&nbsp;— максимальное превышение разрешённой скорости в процессе пребывания автомобиля на всей дороге, то есть максимальная разница
         между скоростью автомобиля и максимальной разре- шенной скоростью на участке, где он в этот момент находится. Если превышения
         скорости не было, то штраф не взимается. В противном случае штраф вычисляется так:
      </p>
      <p>
         </p><ul>
            <li>если <span class="tex-math-text">0 &lt; e ≤ a<sub>1</sub></span> то штраф составляет <span class="tex-math-text">f<sub>1</sub></span> денежных единиц; 
            </li>
            <li>если <span class="tex-math-text">a<sub>1</sub> &lt; e ≤ a<sub>2</sub></span>, то штраф составляет <span class="tex-math-text">f<sub>2</sub></span> денежных единиц; 
            </li>
            <li>…</li>
            <li>если <span class="tex-math-text">a<sub>m - 2</sub> &lt; e ≤ a<sub>m - 1</sub></span>, то штраф составляет <span class="tex-math-text">f<sub>m - 1</sub></span> денежных единиц; 
            </li>
            <li>если <span class="tex-math-text">a<sub>m - 1</sub> &lt; e</span>, то штраф составляет <span class="tex-math-text">f<sub>m</sub></span> денежных единиц. 
            </li>
         </ul>
      <p></p>
      <p>Таким образом, есть <span class="tex-math-text">m</span> диапазонов превышения скорости и соответствующие им штрафы.
      </p>
      <p>Автоматическая система назначения штрафов получила данные о <span class="tex-math-text">q</span> автомобилях. Для удобства пронумеруем их от 1 до <span class="tex-math-text">q</span>. Известно, что <span class="tex-math-text">i</span>-й автомобиль заехал на дорогу в момент времени <span class="tex-math-text">s<sub>i</sub></span>, проехал все <span class="tex-math-text">n</span> участков, после чего выехал с нее в момент времени <span class="tex-math-text">t<sub>i</sub></span>. Отсчёт времени будем вести в секундах с открытия дороги.
      </p>
      <p>Для каждого из автомобилей система должна определить, какой максимальный штраф можно гарантированно выписать этому автомобилю,
         основываясь только на времени заезда на дорогу и выезда с нее.
      </p>
      <p>Требуется написать программу, которая по описанию границ диапазонов превышения скорости, соответствующих штрафов и временам
         въезда/выезда автомобилей определяет для каждого автомобиля максимальный штраф, который можно выписать этому автомобилю.
      </p>
   </div>
   <h2>Формат ввода</h2>
   <div class="input-specification"><span style="">
         <p>Первая строка входных данных содержит единственное целое число <span class="tex-math-text">n</span> <span class="tex-math-text">(1 ≤ n ≤ 10)</span>&nbsp;— количество участков на дороге.
         </p></span><p>Вторая строка содержит <span class="tex-math-text">n</span> целых чисел <span class="tex-math-text">v<sub>i</sub></span> <span class="tex-math-text">(1 ≤ v<sub>i</sub> ≤ 10<sup>9</sup>)</span>&nbsp;— ограничения скорости на участках.
      </p>
      <p>Третья строка содержит <span class="tex-math-text">n</span> целых чисел <span class="tex-math-text">l<sub>i</sub></span> <span class="tex-math-text">(1 ≤ l<sub>i</sub> ≤ 10<sup>9</sup>)</span>&nbsp;— длины участков.
      </p>
      <p>Четвертая строка содержит единственное целое число <span class="tex-math-text">m</span> <span class="tex-math-text">(1 ≤ m ≤ 10<sup>5</sup>)</span>&nbsp;— количество границ диапазонов превышения скорости.
      </p>
      <p>Пятая содержит <span class="tex-math-text">m - 1</span> целых чисел <span class="tex-math-text">a<sub>i</sub></span> <span class="tex-math-text">(1 ≤ a<sub> </sub>9 ≤ 10<sup>9</sup>)</span>&nbsp;— границы диапазонов превышения скорости. Гарантируется, что значения <span class="tex-math-text">a<sub>i</sub></span> строго возрастают. Обратите внимание, что если <span class="tex-math-text">m = 1</span>, то пятая строка ввода пустая.
      </p>
      <p>Шестая строка содержит <span class="tex-math-text">m</span> целых чисел <span class="tex-math-text">f<sub>i</sub></span> <span class="tex-math-text">(1 ≤ f<sub>i</sub> ≤ 10<sup>9</sup>)</span>&nbsp;— штрафы за диапазоны превышения скоростей. Гарантируется, что значения <span class="tex-math-text">f<sub>i</sub></span> возрастают.
      </p>
      <p>Седьмая строка содержит единственное целое число <span class="tex-math-text">q</span> <span class="tex-math-text">(1 ≤ q ≤ 10<sup>5</sup>)</span>&nbsp;—количество автомобилей, которые надо обработать.
      </p>
      <p>Каждая из следующих <span class="tex-math-text">q</span> строк содержит два целых числа <span class="tex-math-text">s<sub>i</sub></span> и <span class="tex-math-text">t<sub>i</sub></span> <span class="tex-math-text">(1 ≤ s<sub>1</sub> &lt; t<sub>i</sub> ≤ 10<sup>9</sup>)</span>&nbsp;— время заезда на трассу и выезда с неё i-го из рассматриваемых автомобилей.
      </p>
   </div>
   <h2>Формат вывода</h2>
   <div class="output-specification"><span style="">
         <p>Для каждого из <span class="tex-math-text">q</span> автомобилей выведите в отдельной строке максимальный штраф, который гарантированно можно выписать этому автомобилю, основываясь
            только на временах его заезда на дорогу и выезда с нее. Если возможна ситуация, что автомобиль ни разу не превысил разрешённую
            скорость, следует вывести 0.
         </p></span><p>Гарантируется, что если время въезда или выезда автомобиля изменить не более чем на <span class="tex-math-text">10<sup>-5</sup></span>, штраф, который можно ему выписать, не изменится.
      </p>
   </div>
   <h2>Пример</h2>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_input i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy input"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy input"></span></button></div></th>
            <th>Вывод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_output i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy output"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy output"></span></button></div></th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>3
10 20 30
400 500 600
6
1 5 10 12 16
100 300 600 800 1000 1500
3
10 100
20 70
45 100
</pre></td>
            <td><pre>0
800
600
</pre></td>
         </tr>
      </tbody>
   </table>
   <h2>Примечания</h2>
   <div class="notes"><span style="">
         <p>Используйте быстрый ввод.</p></span></div>
</div>
