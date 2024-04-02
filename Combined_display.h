#ifndef PROJECT_1_DISPLAY_H
#define PROJECT_1_DISPLAY_H

int showhangman()
{
    //Creating the window
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Hangman!");
    //Declearing all the shapes/lines included in the game
    sf::RectangleShape gallows_part_1(sf::Vector2f(500.f, 20.f));
    sf::RectangleShape gallows_part_2(sf::Vector2f(700.f, 20.f));
    sf::RectangleShape gallows_part_3(sf::Vector2f(300.f, 20.f));
    sf::RectangleShape gallows_part_4(sf::Vector2f(80.f,5.f));
    sf::RectangleShape gallows_part_5(sf::Vector2f(125.f,20.f));
    sf::CircleShape head(50.f);
    sf::RectangleShape body(sf::Vector2f(225.f, 12.f));
    sf::RectangleShape arm1(sf::Vector2f(150.f, 12.f));
    sf::RectangleShape arm2(sf::Vector2f(150.f, 12.f));
    sf::RectangleShape leg1(sf::Vector2f(150.f, 12.f));
    sf::RectangleShape leg2(sf::Vector2f(150.f, 12.f));
    //Text and font declared
    sf::Font font;
    font.loadFromFile("C:/Programming-Gustavo/Fonts/SF Funk Master.ttf");
    sf::Text a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;

    //Setting all the shapes to position and reshape
    gallows_part_1.setFillColor(sf::Color::White);
    gallows_part_1.setPosition(100.f, 850.f);
    gallows_part_2.rotate(90.f);
    gallows_part_2.setPosition(230.f, 150.f);
    gallows_part_3.setPosition(230.f, 150.f);
    gallows_part_4.rotate(90.f);
    gallows_part_4.setPosition(450.f, 170.f);
    gallows_part_5.rotate(135.f);
    gallows_part_5.setPosition(315.f, 170.f);
    head.setPosition(395.f, 260.f);
    head.setOutlineThickness(12.f);
    body.rotate(90.f);
    body.setPosition(450.f,370.f);
    arm1.rotate(45.f);
    arm1.setPosition(448.f,415.f);
    arm2.rotate(135.f);
    arm2.setPosition(450.f,420.f);
    leg1.rotate(45.f);
    leg1.setPosition(448.f,585.f);
    leg2.rotate(135.f);
    leg2.setPosition(450.f,590.f);
    head.setFillColor(sf::Color::Black);
    head.setOutlineColor(sf::Color::White);
    //Set up all the letters
    a.setFont(font);
    a.setString("A");
    a.setCharacterSize(50);
    a.setPosition(1200.f,100.f);
    b.setFont(font);
    b.setString("B");
    b.setCharacterSize(50);
    b.setPosition(1250.f,100.f);
    c.setFont(font);
    c.setString("C");
    c.setCharacterSize(50);
    c.setPosition(1300.f,100.f);
    d.setFont(font);
    d.setString("D");
    d.setCharacterSize(50);
    d.setPosition(1350.f,100.f);
    e.setFont(font);
    e.setString("E");
    e.setCharacterSize(50);
    e.setPosition(1400.f,100.f);
    f.setFont(font);
    f.setString("F");
    f.setCharacterSize(50);
    f.setPosition(1450.f,100.f);
    g.setFont(font);
    g.setString("G");
    g.setCharacterSize(50);
    g.setPosition(1500.f,100.f);
    h.setFont(font);
    h.setString("H");
    h.setCharacterSize(50);
    h.setPosition(1550.f,100.f);
    i.setFont(font);
    i.setString("I");
    i.setCharacterSize(50);
    i.setPosition(1600.f,100.f);
    j.setFont(font);
    j.setString("J");
    j.setCharacterSize(50);
    j.setPosition(1635.f,100.f);
    k.setFont(font);
    k.setString("K");
    k.setCharacterSize(50);
    k.setPosition(1685.f,100.f);
    l.setFont(font);
    l.setString("L");
    l.setCharacterSize(50);
    l.setPosition(1735.f,100.f);
    m.setFont(font);
    m.setString("M");
    m.setCharacterSize(50);
    m.setPosition(1785.f,100.f);
    n.setFont(font);
    n.setString("N");
    n.setCharacterSize(50);
    n.setPosition(1200.f,175.f);
    o.setFont(font);
    o.setString("O");
    o.setCharacterSize(50);
    o.setPosition(1250.f,175.f);
    p.setFont(font);
    p.setString("P");
    p.setCharacterSize(50);
    p.setPosition(1300.f,175.f);
    q.setFont(font);
    q.setString("Q");
    q.setCharacterSize(50);
    q.setPosition(1350.f,175.f);
    r.setFont(font);
    r.setString("R");
    r.setCharacterSize(50);
    r.setPosition(1400.f,175.f);
    s.setFont(font);
    s.setString("S");
    s.setCharacterSize(50);
    s.setPosition(1450.f,175.f);
    t.setFont(font);
    t.setString("T");
    t.setCharacterSize(50);
    t.setPosition(1500.f,175.f);
    u.setFont(font);
    u.setString("U");
    u.setCharacterSize(50);
    u.setPosition(1550.f,175.f);
    v.setFont(font);
    v.setString("V");
    v.setCharacterSize(50);
    v.setPosition(1600.f,175.f);
    w.setFont(font);
    w.setString("W");
    w.setCharacterSize(50);
    w.setPosition(1650.f,175.f);
    x.setFont(font);
    x.setString("X");
    x.setCharacterSize(50);
    x.setPosition(1720.f,175.f);
    y.setFont(font);
    y.setString("Y");
    y.setCharacterSize(50);
    y.setPosition(1770.f,175.f);
    z.setFont(font);
    z.setString("Z");
    z.setCharacterSize(50);
    z.setPosition(1820.f,175.f);


    //Output window
    while (window.isOpen()) {
        sf::Event event;

        while (window.pollEvent(event))
        {
            //Close the window when X out
            switch (event.type) {
                case sf::Event::Closed:
                    window.close();

                    break;
                    //Preventing the user to full size the window
                case sf::Event::Resized:
                    sf::FloatRect visibleArea(0, 0, event.size.width, event.size.height);
                    window.setView(sf::View(visibleArea));

                    break;


            }
            //Display all the graphics
            window.clear();
            window.draw(gallows_part_1);
            window.draw(gallows_part_2);
            window.draw(gallows_part_3);
            window.draw(gallows_part_4);
            window.draw(gallows_part_5);
            window.draw(head);
            window.draw(body);
            window.draw(leg1);
            window.draw(leg2);
            window.draw(arm1);
            window.draw(arm2);
            window.draw(a);
            window.draw(b);
            window.draw(c);
            window.draw(d);
            window.draw(e);
            window.draw(f);
            window.draw(g);
            window.draw(h);
            window.draw(i);
            window.draw(j);
            window.draw(k);
            window.draw(l);
            window.draw(m);
            window.draw(n);
            window.draw(o);
            window.draw(p);
            window.draw(q);
            window.draw(r);
            window.draw(s);
            window.draw(t);
            window.draw(u);
            window.draw(v);
            window.draw(w);
            window.draw(x);
            window.draw(y);
            window.draw(z);
            window.display();
            //Turning keys to gray when used
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
            {
                a.setFillColor(sf::Color{250,250,250,127});
                window.draw(a);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::B))
            {
                b.setFillColor(sf::Color{250,250,250,127});
                window.draw(b);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
            {
                c.setFillColor(sf::Color{250,250,250,127});
                window.draw(c);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
            {
                d.setFillColor(sf::Color{250,250,250,127});
                window.draw(d);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
            {
                e.setFillColor(sf::Color{250,250,250,127});
                window.draw(e);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::F))
            {
                f.setFillColor(sf::Color{250,250,250,127});
                window.draw(f);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::G))
            {
                g.setFillColor(sf::Color{250,250,250,127});
                window.draw(g);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::H))
            {
                h.setFillColor(sf::Color{250,250,250,127});
                window.draw(h);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
            {
                i.setFillColor(sf::Color{250,250,250,127});
                window.draw(i);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::J))
            {
                j.setFillColor(sf::Color{250,250,250,127});
                window.draw(j);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::K))
            {
                k.setFillColor(sf::Color{250,250,250,127});
                window.draw(k);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::L))
            {
                l.setFillColor(sf::Color{250,250,250,127});
                window.draw(l);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
            {
                m.setFillColor(sf::Color{250,250,250,127});
                window.draw(m);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::N))
            {
                n.setFillColor(sf::Color{250,250,250,127});
                window.draw(n);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::O))
            {
                o.setFillColor(sf::Color{250,250,250,127});
                window.draw(o);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::P))
            {
                p.setFillColor(sf::Color{250,250,250,127});
                window.draw(p);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
            {
                q.setFillColor(sf::Color{250,250,250,127});
                window.draw(q);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
            {
                r.setFillColor(sf::Color{250,250,250,127});
                window.draw(r);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
            {
                s.setFillColor(sf::Color{250,250,250,127});
                window.draw(s);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
            {
                t.setFillColor(sf::Color{250,250,250,127});
                window.draw(t);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::U))
            {
                u.setFillColor(sf::Color{250,250,250,127});
                window.draw(u);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::V))
            {
                v.setFillColor(sf::Color{250,250,250,127});
                window.draw(v);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
            {
                w.setFillColor(sf::Color{250,250,250,127});
                window.draw(w);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
            {
                x.setFillColor(sf::Color{250,250,250,127});
                window.draw(x);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
            {
                y.setFillColor(sf::Color{250,250,250,127});
                window.draw(y);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
            {
                z.setFillColor(sf::Color{250,250,250,127});
                window.draw(z);
            }
        }

    }
    return 0;
}

#endif //PROJECT_1_DISPLAY_H
