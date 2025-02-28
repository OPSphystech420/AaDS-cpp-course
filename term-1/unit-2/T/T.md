<div class="problem-statement">
   <div class="header">
      <h1 class="title">T. Нужно больше слияний!</h1>
      <table>
         <tbody><tr class="time-limit">
            <td class="property-title">Ограничение времени</td>
            <td>1&nbsp;секунда</td>
         </tr>
         <tr class="memory-limit">
            <td class="property-title">Ограничение памяти</td>
            <td>128Mb</td>
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
         <p>Дано <span class="tex-math-text">K</span> отсортированных массивов с суммарной длиной <span class="tex-math-text">N</span>. Слейте их в один большой отсортированный массив размера <span class="tex-math-text">N</span>. Решение должно работать асимптотически быстрее чем <span class="tex-math-inline"><img class="tex-math" src="/testsys/tex/render/XE9tZWdhKE4gXGxvZyBOKQ==.png"></span> в худшем случае.
         </p></span></div>
   <h2>Формат ввода</h2>
   <div class="input-specification"><span style="">
         <p>В первой строке идет число <span class="tex-math-text">K</span> <span class="tex-math-text">(1 ≤ K ≤ 10<sup>4</sup>)</span>. Далее идет <span class="tex-math-text">K</span> блоков&nbsp;— описания массивов для слияния в следующем формате.
         </p></span><p>На первой строке идет число <span class="tex-math-text">N<sub>i</sub></span>&nbsp;— размер <span class="tex-math-text">i</span>-го массива. На второй строке через пробел идут <span class="tex-math-text">N<sub>i</sub></span> целых чисел, не превосходящих по модулю <span class="tex-math-text">10<sup>9</sup></span>.
      </p>
      <p>Гарантируется, что </p>
      <p>
         </p><div class="tex-math-block"><img class="tex-math" src="/testsys/tex/render/TiA6PSBcc3VtXGxpbWl0c197aSA9IDF9XksgTl9pIFxsZXEgMTBeNg==.png"></div>
      <p></p>
   </div>
   <h2>Формат вывода</h2>
   <div class="output-specification"><span style="">
         <p>Выведите <span class="tex-math-text">N</span> целых чисел в порядке неубывания&nbsp;— массив, полученный в результате слияния <span class="tex-math-text">K</span> отсортированных массивов.
         </p></span></div>
   <h3>Пример 1</h3>
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
3
1 2 3
4
7 8 9 10
3
4 5 6
</pre></td>
            <td><pre>1 2 3 4 5 6 7 8 9 10 
</pre></td>
         </tr>
      </tbody>
   </table>
   <h3>Пример 2</h3>
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
3
1 2 3
4
1 2 3 4
2
3 4
</pre></td>
            <td><pre>1 1 2 2 3 3 3 4 4 
</pre></td>
         </tr>
      </tbody>
   </table>
</div>
