#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <SFML/Graphics.hpp>

#include <Zelta/Core/SceneManager.hpp>
#include <Zelta/Core/ResourceManager.hpp>
#include <Zelta/Core/Arguments.hpp>

namespace zt {

    /**
     * @brief This class is the main class of your program.
     * Generally, this will be the first class to be instantiated and the last
     * one to be destroyed. It does nothing special.
     */
    class Application {
    protected:
        Arguments arguments;
        
    public:
        Application();
        Application(int argc, char** argv);
        virtual ~Application();

        virtual int run() = 0;
        
        virtual const Arguments& getArguments() const;

    };

}

#endif // APPLICATION_HPP
