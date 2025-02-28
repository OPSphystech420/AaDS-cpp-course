<div class="problem-statement">
   <div class="header">
      <h1 class="title">E*. Монетки</h1>
      <table>
         <tbody><tr class="time-limit">
            <td class="property-title">Ограничение времени</td>
            <td>1.5&nbsp;секунд</td>
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
         <p>В Волшебной стране используются монетки достоинством <span class="tex-math-text">A<sub>1</sub></span>, <span class="tex-math-text">A<sub>2</sub></span>,..., <span class="tex-math-text">A<sub>M</sub></span>. Волшебный человечек пришел в магазин и обнаружил, что у него есть ровно по две монетки каждого достоинства. Ему нужно заплатить
            сумму <span class="tex-math-text">N</span>. Напишите программу, определяющую, сможет ли он расплатиться без сдачи.
         </p></span></div>
   <h2>Формат ввода</h2>
   <div class="input-specification"><span style="">
         <p>На вход программы сначала поступает число <span class="tex-math-text">N</span> (<span class="tex-math-text">1 ≤ N ≤ 10<sup>9</sup></span>), затем - число <span class="tex-math-text">M</span> (<span class="tex-math-text">1 ≤ M ≤ 15</span>) и далее M попарно различных чисел <span class="tex-math-text">A<sub>1</sub></span>, <span class="tex-math-text">A<sub>2</sub></span>,..., <span class="tex-math-text">A<sub>M</sub></span> (<span class="tex-math-text">1 ≤ A<sub>i</sub> ≤ 10<sup>9</sup></span>).
         </p></span></div>
   <h2>Формат вывода</h2>
   <div class="output-specification"><span style="">
         <p>Сначала выведите <span class="tex-math-text">K</span> - количество монет, которое придется отдать Волшебному человечку, если он сможет заплатить указанную сумму без сдачи. Далее
            выведите K чисел, задающих достоинства монет. Если решений несколько, выведите вариант, в котором Волшебный человек отдаст
            наименьшее возможное количество монет. Если таких вариантов несколько, выведите любой из них.
         </p></span><p>Если без сдачи не обойтись, то выведите одно число 0. Если же у Волшебного человечка не хватит денег, чтобы заплатить указанную
         сумму, выведите одно число -1 (минус один). 
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
            <td><pre>108 7
45 35 12 4 3 1 931751396
</pre></td>
            <td><pre>5
45 35 12 12 4 
</pre></td>
         </tr>
      </tbody>
   </table>
</div>
