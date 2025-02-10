#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/WebPluginFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Vuplex/WebView/Internal/zzzz__WebPluginFactory_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Vuplex/WebView/Internal/zzzz__IWebPlugin_def.hpp"
#include "Vuplex/WebView/zzzz__WebPluginType_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::Internal::WebPluginFactory.GetAllPlugins
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Vuplex::WebView::Internal::IWebPlugin*>* (::Vuplex::WebView::Internal::WebPluginFactory::*)()>(&::Vuplex::WebView::Internal::WebPluginFactory::GetAllPlugins)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x17c3704;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::WebPluginFactory.GetDefaultPlugin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Vuplex::WebView::Internal::IWebPlugin* (::Vuplex::WebView::Internal::WebPluginFactory::*)(::ArrayW<::Vuplex::WebView::WebPluginType,::Array<::Vuplex::WebView::WebPluginType>*>)>(&::Vuplex::WebView::Internal::WebPluginFactory::GetDefaultPlugin)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x17c3774;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::WebPluginFactory.RegisterAndroidPlugin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Vuplex::WebView::Internal::IWebPlugin*)>(&::Vuplex::WebView::Internal::WebPluginFactory::RegisterAndroidPlugin)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x17c3c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                        "RegisterAndroidPlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Internal::IWebPlugin*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::WebPluginFactory.RegisterAndroidGeckoPlugin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Vuplex::WebView::Internal::IWebPlugin*)>(&::Vuplex::WebView::Internal::WebPluginFactory::RegisterAndroidGeckoPlugin)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x17c3d00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                        "RegisterAndroidGeckoPlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Internal::IWebPlugin*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::WebPluginFactory.RegisterIOSPlugin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Vuplex::WebView::Internal::IWebPlugin*)>(&::Vuplex::WebView::Internal::WebPluginFactory::RegisterIOSPlugin)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x17c3d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                        "RegisterIOSPlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Internal::IWebPlugin*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::WebPluginFactory.RegisterUwpPlugin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Vuplex::WebView::Internal::IWebPlugin*)>(&::Vuplex::WebView::Internal::WebPluginFactory::RegisterUwpPlugin)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x17c3dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                        "RegisterUwpPlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Internal::IWebPlugin*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::WebPluginFactory.RegisterWebGLPlugin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Vuplex::WebView::Internal::IWebPlugin*)>(&::Vuplex::WebView::Internal::WebPluginFactory::RegisterWebGLPlugin)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x17c3e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                        "RegisterWebGLPlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Internal::IWebPlugin*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::WebPluginFactory.RegisterStandalonePlugin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Vuplex::WebView::Internal::IWebPlugin*)>(&::Vuplex::WebView::Internal::WebPluginFactory::RegisterStandalonePlugin)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x17c3e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                        "RegisterStandalonePlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Internal::IWebPlugin*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::WebPluginFactory._addPlugin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Vuplex::WebView::Internal::IWebPlugin*)>(&::Vuplex::WebView::Internal::WebPluginFactory::_addPlugin)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x17c3c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                        "_addPlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Internal::IWebPlugin*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::WebPluginFactory._choosePlugin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Vuplex::WebView::Internal::IWebPlugin* (::Vuplex::WebView::Internal::WebPluginFactory::*)(::Vuplex::WebView::Internal::IWebPlugin*, ::StringW, ::StringW, ::StringW)>(&::Vuplex::WebView::Internal::WebPluginFactory::_choosePlugin)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x17c38ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                        "_choosePlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Internal::IWebPlugin*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::WebPluginFactory._getMoreInfoText
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Vuplex::WebView::Internal::WebPluginFactory::*)(::StringW)>(&::Vuplex::WebView::Internal::WebPluginFactory::_getMoreInfoText)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x17c3ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                        "_getMoreInfoText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::WebPluginFactory._logMockWarningOnce
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::WebPluginFactory::*)(::StringW)>(&::Vuplex::WebView::Internal::WebPluginFactory::_logMockWarningOnce)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x17c3f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                        "_logMockWarningOnce",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::WebPluginFactory._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::WebPluginFactory::*)()>(&::Vuplex::WebView::Internal::WebPluginFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17c4038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& Vuplex::WebView::Internal::WebPluginFactory::__cordl_internal_get__mockWarningLogged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mockWarningLogged;
}
constexpr bool const& Vuplex::WebView::Internal::WebPluginFactory::__cordl_internal_get__mockWarningLogged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mockWarningLogged;
}
constexpr void Vuplex::WebView::Internal::WebPluginFactory::__cordl_internal_set__mockWarningLogged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mockWarningLogged = value;
}
inline void Vuplex::WebView::Internal::WebPluginFactory::setStaticF__allPlugins(::System::Collections::Generic::HashSet_1<::Vuplex::WebView::Internal::IWebPlugin*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::Vuplex::WebView::Internal::IWebPlugin*>*, "_allPlugins", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get>(std::forward<::System::Collections::Generic::HashSet_1<::Vuplex::WebView::Internal::IWebPlugin*>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::Vuplex::WebView::Internal::IWebPlugin*>* Vuplex::WebView::Internal::WebPluginFactory::getStaticF__allPlugins()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::Vuplex::WebView::Internal::IWebPlugin*>*, "_allPlugins", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get>();
}
inline void Vuplex::WebView::Internal::WebPluginFactory::setStaticF__androidPlugin(::Vuplex::WebView::Internal::IWebPlugin*  value)  {
::cordl_internals::setStaticField<::Vuplex::WebView::Internal::IWebPlugin*, "_androidPlugin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get>(std::forward<::Vuplex::WebView::Internal::IWebPlugin*>(value));
}
inline ::Vuplex::WebView::Internal::IWebPlugin* Vuplex::WebView::Internal::WebPluginFactory::getStaticF__androidPlugin()  {
return ::cordl_internals::getStaticField<::Vuplex::WebView::Internal::IWebPlugin*, "_androidPlugin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get>();
}
inline void Vuplex::WebView::Internal::WebPluginFactory::setStaticF__androidGeckoPlugin(::Vuplex::WebView::Internal::IWebPlugin*  value)  {
::cordl_internals::setStaticField<::Vuplex::WebView::Internal::IWebPlugin*, "_androidGeckoPlugin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get>(std::forward<::Vuplex::WebView::Internal::IWebPlugin*>(value));
}
inline ::Vuplex::WebView::Internal::IWebPlugin* Vuplex::WebView::Internal::WebPluginFactory::getStaticF__androidGeckoPlugin()  {
return ::cordl_internals::getStaticField<::Vuplex::WebView::Internal::IWebPlugin*, "_androidGeckoPlugin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get>();
}
inline void Vuplex::WebView::Internal::WebPluginFactory::setStaticF__iosPlugin(::Vuplex::WebView::Internal::IWebPlugin*  value)  {
::cordl_internals::setStaticField<::Vuplex::WebView::Internal::IWebPlugin*, "_iosPlugin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get>(std::forward<::Vuplex::WebView::Internal::IWebPlugin*>(value));
}
inline ::Vuplex::WebView::Internal::IWebPlugin* Vuplex::WebView::Internal::WebPluginFactory::getStaticF__iosPlugin()  {
return ::cordl_internals::getStaticField<::Vuplex::WebView::Internal::IWebPlugin*, "_iosPlugin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get>();
}
inline void Vuplex::WebView::Internal::WebPluginFactory::setStaticF__standalonePlugin(::Vuplex::WebView::Internal::IWebPlugin*  value)  {
::cordl_internals::setStaticField<::Vuplex::WebView::Internal::IWebPlugin*, "_standalonePlugin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get>(std::forward<::Vuplex::WebView::Internal::IWebPlugin*>(value));
}
inline ::Vuplex::WebView::Internal::IWebPlugin* Vuplex::WebView::Internal::WebPluginFactory::getStaticF__standalonePlugin()  {
return ::cordl_internals::getStaticField<::Vuplex::WebView::Internal::IWebPlugin*, "_standalonePlugin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get>();
}
inline void Vuplex::WebView::Internal::WebPluginFactory::setStaticF__uwpPlugin(::Vuplex::WebView::Internal::IWebPlugin*  value)  {
::cordl_internals::setStaticField<::Vuplex::WebView::Internal::IWebPlugin*, "_uwpPlugin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get>(std::forward<::Vuplex::WebView::Internal::IWebPlugin*>(value));
}
inline ::Vuplex::WebView::Internal::IWebPlugin* Vuplex::WebView::Internal::WebPluginFactory::getStaticF__uwpPlugin()  {
return ::cordl_internals::getStaticField<::Vuplex::WebView::Internal::IWebPlugin*, "_uwpPlugin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get>();
}
inline void Vuplex::WebView::Internal::WebPluginFactory::setStaticF__webGLPlugin(::Vuplex::WebView::Internal::IWebPlugin*  value)  {
::cordl_internals::setStaticField<::Vuplex::WebView::Internal::IWebPlugin*, "_webGLPlugin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get>(std::forward<::Vuplex::WebView::Internal::IWebPlugin*>(value));
}
inline ::Vuplex::WebView::Internal::IWebPlugin* Vuplex::WebView::Internal::WebPluginFactory::getStaticF__webGLPlugin()  {
return ::cordl_internals::getStaticField<::Vuplex::WebView::Internal::IWebPlugin*, "_webGLPlugin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get>();
}
inline ::System::Collections::Generic::List_1<::Vuplex::WebView::Internal::IWebPlugin*>* Vuplex::WebView::Internal::WebPluginFactory::GetAllPlugins()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Vuplex::WebView::Internal::IWebPlugin*>*, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::Internal::IWebPlugin* Vuplex::WebView::Internal::WebPluginFactory::GetDefaultPlugin(::ArrayW<::Vuplex::WebView::WebPluginType,::Array<::Vuplex::WebView::WebPluginType>*>  preferredPlugins)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<::Vuplex::WebView::Internal::IWebPlugin*, false>(this, ___internal_method, preferredPlugins);
}
inline void Vuplex::WebView::Internal::WebPluginFactory::RegisterAndroidPlugin(::Vuplex::WebView::Internal::IWebPlugin*  plugin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                        "RegisterAndroidPlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Internal::IWebPlugin*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, plugin);
}
inline void Vuplex::WebView::Internal::WebPluginFactory::RegisterAndroidGeckoPlugin(::Vuplex::WebView::Internal::IWebPlugin*  plugin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                        "RegisterAndroidGeckoPlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Internal::IWebPlugin*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, plugin);
}
inline void Vuplex::WebView::Internal::WebPluginFactory::RegisterIOSPlugin(::Vuplex::WebView::Internal::IWebPlugin*  plugin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                        "RegisterIOSPlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Internal::IWebPlugin*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, plugin);
}
inline void Vuplex::WebView::Internal::WebPluginFactory::RegisterUwpPlugin(::Vuplex::WebView::Internal::IWebPlugin*  plugin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                        "RegisterUwpPlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Internal::IWebPlugin*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, plugin);
}
inline void Vuplex::WebView::Internal::WebPluginFactory::RegisterWebGLPlugin(::Vuplex::WebView::Internal::IWebPlugin*  plugin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                        "RegisterWebGLPlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Internal::IWebPlugin*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, plugin);
}
inline void Vuplex::WebView::Internal::WebPluginFactory::RegisterStandalonePlugin(::Vuplex::WebView::Internal::IWebPlugin*  plugin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                        "RegisterStandalonePlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Internal::IWebPlugin*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, plugin);
}
inline void Vuplex::WebView::Internal::WebPluginFactory::_addPlugin(::Vuplex::WebView::Internal::IWebPlugin*  plugin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                        "_addPlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Internal::IWebPlugin*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, plugin);
}
inline ::Vuplex::WebView::Internal::IWebPlugin* Vuplex::WebView::Internal::WebPluginFactory::_choosePlugin(::Vuplex::WebView::Internal::IWebPlugin*  plugin, ::StringW  buildPlatform, ::StringW  packageName, ::StringW  storeUrlPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                        "_choosePlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Internal::IWebPlugin*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Vuplex::WebView::Internal::IWebPlugin*, false>(this, ___internal_method, plugin, buildPlatform, packageName, storeUrlPath);
}
inline ::StringW Vuplex::WebView::Internal::WebPluginFactory::_getMoreInfoText(::StringW  storeUrlPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                        "_getMoreInfoText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, storeUrlPath);
}
inline void Vuplex::WebView::Internal::WebPluginFactory::_logMockWarningOnce(::StringW  reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                        "_logMockWarningOnce",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reason);
}
inline void Vuplex::WebView::Internal::WebPluginFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::WebPluginFactory*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::Internal::WebPluginFactory* Vuplex::WebView::Internal::WebPluginFactory::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::WebPluginFactory*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::WebPluginFactory::WebPluginFactory()   {
}
