/************************************************************************************************
** File created by QxEntityEditor 1.2.1 (2016/12/28 09:28) : please, do NOT modify this file ! **
************************************************************************************************/

#ifndef _TRYOUT_EXPORT_H_
#define _TRYOUT_EXPORT_H_

#ifdef _MSC_VER
#pragma once
#endif

#ifdef _BUILDING_TRYOUT
#define TRYOUT_EXPORT QX_DLL_EXPORT_HELPER
#else // _BUILDING_TRYOUT
#define TRYOUT_EXPORT QX_DLL_IMPORT_HELPER
#endif // _BUILDING_TRYOUT

#ifdef _BUILDING_TRYOUT
#define QX_REGISTER_HPP_TRYOUT QX_REGISTER_HPP_EXPORT_DLL
#define QX_REGISTER_CPP_TRYOUT QX_REGISTER_CPP_EXPORT_DLL
#define QX_REGISTER_COMPLEX_CLASS_NAME_HPP_TRYOUT QX_REGISTER_COMPLEX_CLASS_NAME_HPP_EXPORT_DLL
#define QX_REGISTER_COMPLEX_CLASS_NAME_CPP_TRYOUT QX_REGISTER_COMPLEX_CLASS_NAME_CPP_EXPORT_DLL
#else // _BUILDING_TRYOUT
#define QX_REGISTER_HPP_TRYOUT QX_REGISTER_HPP_IMPORT_DLL
#define QX_REGISTER_CPP_TRYOUT QX_REGISTER_CPP_IMPORT_DLL
#define QX_REGISTER_COMPLEX_CLASS_NAME_HPP_TRYOUT QX_REGISTER_COMPLEX_CLASS_NAME_HPP_IMPORT_DLL
#define QX_REGISTER_COMPLEX_CLASS_NAME_CPP_TRYOUT QX_REGISTER_COMPLEX_CLASS_NAME_CPP_IMPORT_DLL
#endif // _BUILDING_TRYOUT

#ifndef QX_DLL_EXPORT_TRYOUT_SINGLETON_HPP
#ifdef _BUILDING_TRYOUT
#define QX_DLL_EXPORT_TRYOUT_SINGLETON_HPP(x) /* Nothing */
#else // _BUILDING_TRYOUT
#define QX_DLL_EXPORT_TRYOUT_SINGLETON_HPP(x) QX_DLL_EXPORT_TEMPLATE_HPP(class, qx::QxSingleton< x >)
#endif // _BUILDING_TRYOUT
#endif // QX_DLL_EXPORT_TRYOUT_SINGLETON_HPP

#ifndef QX_DLL_EXPORT_TRYOUT_SINGLETON_CPP
#ifdef _BUILDING_TRYOUT
#define QX_DLL_EXPORT_TRYOUT_SINGLETON_CPP(x) QX_DLL_EXPORT_TEMPLATE_CPP(class, qx::QxSingleton< x >)
#else // _BUILDING_TRYOUT
#define QX_DLL_EXPORT_TRYOUT_SINGLETON_CPP(x) /* Nothing */
#endif // _BUILDING_TRYOUT
#endif // QX_DLL_EXPORT_TRYOUT_SINGLETON_CPP

#endif // _TRYOUT_EXPORT_H_
