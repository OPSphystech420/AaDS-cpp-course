<div class="problem-statement">
   <div class="header">
      <h1 class="title">B*. Тетрадка</h1>
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
         <p>Проектная работа Виталика по компьютерному зрению заключается в распознавании типа тетрадки по небольшому ее участку (в клетку,
            в линейку, в вертикальную линейку). Однако времени обучать нейросеть у Виталика нет, поэтому он попросил вас помочь ему написать
            программу на C++, которая бы делала это без привлечения искусственного интеллекта (почему вы согласились на это, и почему
            эта задача обязательна, легенда умалчивает).
         </p></span><p>Часть тетрадки представляет собой двумерную таблицу из нулей и единиц, где единица — закрашенный участок, а нуль — незакрашенный. Вертикальной линией считается столбец, в котором стоят только единицы, горизонтальной — строка, второй стоят только единицы. Гарантируется, что тетрадь изначально пустая, то есть единица обязательно является частью
         какой-то линии.
      </p>
      <p>Тетрадь в горизонтальную линейку состоит только из горизонтальных линий, в вертикальную линейку — только из вертикальных линий, в клетку — из линий обоих типов. Причем расстояния между всеми параллельными линиями одинаковы (клетки - обязательно квадраты), и между
         ними обязательно есть пустоты (не могут располагаться вплотную).
      </p>
      <p>По заданному участку выведите тип тетради, если его возможно однозначно определить.</p>
   </div>
   <h2>Формат ввода</h2>
   <div class="input-specification"><span style="">
         <p>В первой строке даны целые числа <span class="tex-math-text">n</span> и <span class="tex-math-text">m</span> (1 ≤ <span class="tex-math-text">n</span>, <span class="tex-math-text">m</span> ≤ 1 000) — количество строк и столбцов в видимом участке. Далле следует n строк по m целых чисел <span class="tex-math-text">a<sub>i, j</sub></span> (0 ≤ <span class="tex-math-text">a<sub>i,j</sub></span> ≤ 1) — видимый участок тетради.
         </p></span></div>
   <h2>Формат вывода</h2>
   <div class="output-specification"><span style="">
         <p>В качестве ответа выведите:</p></span><p>«Square», если тетрадка в клетку; «Line», если тетрадка в линейку; «Vertical line», если тетрадка в вертикальную линейку;
         «?», если невозможно однозначно определить, к какому типу относится данная тетрадь.
      </p>
   </div>
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
            <td><pre>3 5
00100
11111
00100
</pre></td>
            <td><pre>Square
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
            <td><pre>4 5
11111
00000
11111
00000
</pre></td>
            <td><pre>Line
</pre></td>
         </tr>
      </tbody>
   </table>
   <h3>Пример 3</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_input i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy input"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy input"></span></button></div></th>
            <th>Вывод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_output i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy output"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy output"></span></button></div></th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>5 5
00000
00000
11111
00000
00000
</pre></td>
            <td><pre>?
</pre></td>
         </tr>
      </tbody>
   </table>
</div>
