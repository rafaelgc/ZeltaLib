#ifndef ZELTALIB_LAYER_HPP
#define ZELTALIB_LAYER_HPP

#include <vector>

#include <SFML/Graphics/Drawable.hpp> // Base class: sf::Drawable
#include <SFML/Graphics/RenderTarget.hpp>

namespace zt {

    /**
     * @brief Contenedor de objetos dibujables.
     * Esta clase permite agrupar ciertos elementos dibujables (sprites, textos, etc) para poder
     * hacerlos desaparecer al mismo tiempo.
     * */
    class RenderLayer : public sf::Drawable {
    protected:
        /**
         * @brief Sólo cuanto es true se dibujarán los elementos de la capa.
         * */
        bool visible;
        /**
         * @brief Vector que contiene un puntero a los dibujables de esta capa.
         * */
        std::vector<sf::Drawable*>drawableItems;
        
        /**
         * @brief Profundidad de la capa.
         */
        int z;
    public:
        /**
         * @brief El constructor por defecto. Pone <b>visible = true</b> y <b>z = 0</b>
         * */
        RenderLayer();
        
        /**
         * @brief El constructor acepta como parámetro la profundidad y la visibilidad.
         */
        RenderLayer(int z, bool visible = true);
        
        virtual ~RenderLayer();
        /**
         * @brief Método heredado que se encarga de dibujar todos los elementos de la capa
         * si esta está visible.
         * */
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
        /**
         * @brief Añade un elemento dibujable a la capa.
         * */
        void addDrawable(sf::Drawable &item);
        
        /**
         * @brief Elimina un sf::Drawable si existe.
         * @param item sf::Drawable que se pretende eliminar.
         * @return True si fue eliminado.
         */
        bool removeDrawable(sf::Drawable & item);
        
        /**
         * @brief Permite alternar la capa entre visible e invisible.
         * */
        void setVisible(bool visible);
        bool isVisible() const;
        
        int getZ() const;
        void setZ(int z);
        
        unsigned int count() const;
        bool isEmpty() const;
        
        bool operator<(zt::RenderLayer & other) const;

    };

}

#endif // LAYER_HPP