/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Loadable.hpp
 * Author: rafa
 *
 * Created on January 18, 2018, 4:36 AM
 */

#ifndef ZELTALIB_LOADINGTARGET_HPP
#define ZELTALIB_LOADINGTARGET_HPP

#include <string>

namespace zt {
    class ResourceProvider;

    /**
     * @brief Base class for resource containers. It represents something you can
     * load things into.
     */
    class LoadingTarget {
    public:

        virtual ~LoadingTarget() {
        };
        virtual void loadFromFile(const std::string & name, const std::string & path) = 0;
        virtual void loadFromMemory(const std::string& name, const void* data, std::size_t size) = 0;
        virtual void release(const std::string& name) = 0;
        virtual const std::string& getName() const = 0;

        virtual void pendant(const std::string& name, ResourceProvider& provider) = 0;
        virtual void notPendant(const std::string& name) = 0;

        virtual bool exists(const std::string& name) const = 0;
        virtual bool isLoaded(const std::string& name) const = 0;
    };
}
#endif /* LOADABLE_HPP */

