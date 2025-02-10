#pragma once
// IWYU pragma private; include "UnityEngine/WWWForm.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__WWWForm_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::UnityEngine::WWWForm.get_DefaultEncoding
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&::UnityEngine::WWWForm::get_DefaultEncoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3193704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWForm*>::get(),
                        "get_DefaultEncoding",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::WWWForm.get_headers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::UnityEngine::WWWForm::*)()>(&::UnityEngine::WWWForm::get_headers)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x319370c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWForm*>::get(),
                        "get_headers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::WWWForm.get_data
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::UnityEngine::WWWForm::*)()>(&::UnityEngine::WWWForm::get_data)> {
  constexpr static std::size_t size = 0xd54;
  constexpr static std::size_t addrs = 0x3193858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWForm*>::get(),
                        "get_data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*& UnityEngine::WWWForm::__cordl_internal_get_formData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formData;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* const& UnityEngine::WWWForm::__cordl_internal_get_formData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formData;
}
constexpr void UnityEngine::WWWForm::__cordl_internal_set_formData(::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___formData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::WWWForm::__cordl_internal_get_fieldNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fieldNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::WWWForm::__cordl_internal_get_fieldNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fieldNames;
}
constexpr void UnityEngine::WWWForm::__cordl_internal_set_fieldNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fieldNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::WWWForm::__cordl_internal_get_fileNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::WWWForm::__cordl_internal_get_fileNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileNames;
}
constexpr void UnityEngine::WWWForm::__cordl_internal_set_fileNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fileNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::WWWForm::__cordl_internal_get_types()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___types;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::WWWForm::__cordl_internal_get_types() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___types;
}
constexpr void UnityEngine::WWWForm::__cordl_internal_set_types(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___types)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& UnityEngine::WWWForm::__cordl_internal_get_boundary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundary;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& UnityEngine::WWWForm::__cordl_internal_get_boundary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundary;
}
constexpr void UnityEngine::WWWForm::__cordl_internal_set_boundary(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___boundary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::WWWForm::__cordl_internal_get_containsFiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___containsFiles;
}
constexpr bool const& UnityEngine::WWWForm::__cordl_internal_get_containsFiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___containsFiles;
}
constexpr void UnityEngine::WWWForm::__cordl_internal_set_containsFiles(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___containsFiles = value;
}
inline void UnityEngine::WWWForm::setStaticF_dDash(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "dDash", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWForm*>::get>(std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> UnityEngine::WWWForm::getStaticF_dDash()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "dDash", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWForm*>::get>();
}
inline void UnityEngine::WWWForm::setStaticF_crlf(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "crlf", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWForm*>::get>(std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> UnityEngine::WWWForm::getStaticF_crlf()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "crlf", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWForm*>::get>();
}
inline void UnityEngine::WWWForm::setStaticF_contentTypeHeader(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "contentTypeHeader", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWForm*>::get>(std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> UnityEngine::WWWForm::getStaticF_contentTypeHeader()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "contentTypeHeader", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWForm*>::get>();
}
inline void UnityEngine::WWWForm::setStaticF_dispositionHeader(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "dispositionHeader", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWForm*>::get>(std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> UnityEngine::WWWForm::getStaticF_dispositionHeader()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "dispositionHeader", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWForm*>::get>();
}
inline void UnityEngine::WWWForm::setStaticF_endQuote(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "endQuote", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWForm*>::get>(std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> UnityEngine::WWWForm::getStaticF_endQuote()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "endQuote", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWForm*>::get>();
}
inline void UnityEngine::WWWForm::setStaticF_fileNameField(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "fileNameField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWForm*>::get>(std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> UnityEngine::WWWForm::getStaticF_fileNameField()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "fileNameField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWForm*>::get>();
}
inline void UnityEngine::WWWForm::setStaticF_ampersand(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "ampersand", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWForm*>::get>(std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> UnityEngine::WWWForm::getStaticF_ampersand()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "ampersand", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWForm*>::get>();
}
inline void UnityEngine::WWWForm::setStaticF_equal(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "equal", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWForm*>::get>(std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> UnityEngine::WWWForm::getStaticF_equal()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "equal", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWForm*>::get>();
}
inline ::System::Text::Encoding* UnityEngine::WWWForm::get_DefaultEncoding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWForm*>::get(),
                        "get_DefaultEncoding",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* UnityEngine::WWWForm::get_headers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWForm*>::get(),
                        "get_headers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> UnityEngine::WWWForm::get_data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWForm*>::get(),
                        "get_data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::WWWForm::WWWForm()   {
}
