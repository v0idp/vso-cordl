#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/XmlDeclarationWrapper.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlDeclaration_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XmlNodeWrapper_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XmlDeclarationWrapper_def.hpp"
#include "System/Xml/zzzz__XmlDeclaration_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDeclarationWrapper._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Converters::XmlDeclarationWrapper::*)(::System::Xml::XmlDeclaration*)>(&::Newtonsoft::Json::Converters::XmlDeclarationWrapper::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x283ea38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XmlDeclarationWrapper*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDeclaration*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDeclarationWrapper.get_Version
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Converters::XmlDeclarationWrapper::*)()>(&::Newtonsoft::Json::Converters::XmlDeclarationWrapper::get_Version)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x283f044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XmlDeclarationWrapper*>::get(),
                        "get_Version",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDeclarationWrapper.get_Encoding
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Converters::XmlDeclarationWrapper::*)()>(&::Newtonsoft::Json::Converters::XmlDeclarationWrapper::get_Encoding)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x283f060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XmlDeclarationWrapper*>::get(),
                        "get_Encoding",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDeclarationWrapper.get_Standalone
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Converters::XmlDeclarationWrapper::*)()>(&::Newtonsoft::Json::Converters::XmlDeclarationWrapper::get_Standalone)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x283f07c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XmlDeclarationWrapper*>::get(),
                        "get_Standalone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlDeclaration*& Newtonsoft::Json::Converters::XmlDeclarationWrapper::__cordl_internal_get__declaration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____declaration;
}
constexpr ::System::Xml::XmlDeclaration* const& Newtonsoft::Json::Converters::XmlDeclarationWrapper::__cordl_internal_get__declaration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____declaration;
}
constexpr void Newtonsoft::Json::Converters::XmlDeclarationWrapper::__cordl_internal_set__declaration(::System::Xml::XmlDeclaration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____declaration)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Newtonsoft::Json::Converters::XmlDeclarationWrapper::_ctor(::System::Xml::XmlDeclaration*  declaration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XmlDeclarationWrapper*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDeclaration*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, declaration);
}
inline ::StringW Newtonsoft::Json::Converters::XmlDeclarationWrapper::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XmlDeclarationWrapper*>::get(),
                        "get_Version",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Converters::XmlDeclarationWrapper::get_Encoding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XmlDeclarationWrapper*>::get(),
                        "get_Encoding",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Converters::XmlDeclarationWrapper::get_Standalone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::XmlDeclarationWrapper*>::get(),
                        "get_Standalone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::XmlDeclarationWrapper* Newtonsoft::Json::Converters::XmlDeclarationWrapper::New_ctor(::System::Xml::XmlDeclaration*  declaration)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Converters::XmlDeclarationWrapper*>(declaration));
}
/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlDeclaration"
constexpr  Newtonsoft::Json::Converters::XmlDeclarationWrapper::operator ::Newtonsoft::Json::Converters::IXmlDeclaration*() noexcept {
return static_cast<::Newtonsoft::Json::Converters::IXmlDeclaration*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Converters::IXmlDeclaration"
constexpr ::Newtonsoft::Json::Converters::IXmlDeclaration* Newtonsoft::Json::Converters::XmlDeclarationWrapper::i___Newtonsoft__Json__Converters__IXmlDeclaration() noexcept {
return static_cast<::Newtonsoft::Json::Converters::IXmlDeclaration*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr  Newtonsoft::Json::Converters::XmlDeclarationWrapper::operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept {
return static_cast<::Newtonsoft::Json::Converters::IXmlNode*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XmlDeclarationWrapper::i___Newtonsoft__Json__Converters__IXmlNode() noexcept {
return static_cast<::Newtonsoft::Json::Converters::IXmlNode*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::XmlDeclarationWrapper::XmlDeclarationWrapper()   {
}
