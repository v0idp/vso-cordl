#pragma once
// IWYU pragma private; include "UnityEngine/TextAsset.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
inline void UnityEngine::TextAsset_EncodingUtility::setStaticF_encodingLookup(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t,::Array<uint8_t>*>,::System::Text::Encoding*>,::Array<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t,::Array<uint8_t>*>,::System::Text::Encoding*>>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t,::Array<uint8_t>*>,::System::Text::Encoding*>,::Array<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t,::Array<uint8_t>*>,::System::Text::Encoding*>>*>, "encodingLookup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset_EncodingUtility*>::get>(std::forward<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t,::Array<uint8_t>*>,::System::Text::Encoding*>,::Array<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t,::Array<uint8_t>*>,::System::Text::Encoding*>>*>>(value));
}
inline ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t,::Array<uint8_t>*>,::System::Text::Encoding*>,::Array<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t,::Array<uint8_t>*>,::System::Text::Encoding*>>*> UnityEngine::TextAsset_EncodingUtility::getStaticF_encodingLookup()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t,::Array<uint8_t>*>,::System::Text::Encoding*>,::Array<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t,::Array<uint8_t>*>,::System::Text::Encoding*>>*>, "encodingLookup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset_EncodingUtility*>::get>();
}
inline void UnityEngine::TextAsset_EncodingUtility::setStaticF_targetEncoding(::System::Text::Encoding*  value)  {
::cordl_internals::setStaticField<::System::Text::Encoding*, "targetEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset_EncodingUtility*>::get>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* UnityEngine::TextAsset_EncodingUtility::getStaticF_targetEncoding()  {
return ::cordl_internals::getStaticField<::System::Text::Encoding*, "targetEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset_EncodingUtility*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::TextAsset_EncodingUtility::TextAsset_EncodingUtility()   {
}
//  Writing Method size for method: ::UnityEngine::TextAsset.get_bytes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::UnityEngine::TextAsset::*)()>(&::UnityEngine::TextAsset::get_bytes)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f8dde4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(),
                        "get_bytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.get_text
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextAsset::*)()>(&::UnityEngine::TextAsset::get_text)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2f8de20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(),
                        "get_text",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextAsset::*)()>(&::UnityEngine::TextAsset::ToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2f8e138;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.DecodeString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::UnityEngine::TextAsset::DecodeString)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x2f8deb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(),
                        "DecodeString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t,::Array<uint8_t>*> UnityEngine::TextAsset::get_bytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(),
                        "get_bytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::TextAsset::get_text()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(),
                        "get_text",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::TextAsset::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::TextAsset::DecodeString(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(),
                        "DecodeString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, bytes);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextAsset::TextAsset()   {
}
