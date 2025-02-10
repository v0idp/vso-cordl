#pragma once
// IWYU pragma private; include "VROSC/UI/SkinnableColorsMasterData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "VROSC/UI/zzzz__SkinnableColorsMasterData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "VROSC/UI/zzzz__SkinnableColorsMasterData_def.hpp"
#include "VROSC/UI/zzzz__UIColorGetter_def.hpp"
//  Writing Method size for method: ::VROSC::UI::SkinnableColorsMasterData_Category.get_MappedColors
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::UIColorGetter>>* (::VROSC::UI::SkinnableColorsMasterData_Category::*)()>(&::VROSC::UI::SkinnableColorsMasterData_Category::get_MappedColors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e77dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::SkinnableColorsMasterData_Category*>::get(),
                        "get_MappedColors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::SkinnableColorsMasterData_Category.get_Name
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::UI::SkinnableColorsMasterData_Category::*)()>(&::VROSC::UI::SkinnableColorsMasterData_Category::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e77e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::SkinnableColorsMasterData_Category*>::get(),
                        "get_Name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::SkinnableColorsMasterData_Category._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::SkinnableColorsMasterData_Category::*)()>(&::VROSC::UI::SkinnableColorsMasterData_Category::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17e77ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::SkinnableColorsMasterData_Category*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::UI::SkinnableColorsMasterData_Category::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& VROSC::UI::SkinnableColorsMasterData_Category::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void VROSC::UI::SkinnableColorsMasterData_Category::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::UIColorGetter>>*& VROSC::UI::SkinnableColorsMasterData_Category::__cordl_internal_get__mappedColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mappedColors;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::UIColorGetter>>* const& VROSC::UI::SkinnableColorsMasterData_Category::__cordl_internal_get__mappedColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mappedColors;
}
constexpr void VROSC::UI::SkinnableColorsMasterData_Category::__cordl_internal_set__mappedColors(::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::UIColorGetter>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mappedColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::UIColorGetter>>* VROSC::UI::SkinnableColorsMasterData_Category::get_MappedColors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::SkinnableColorsMasterData_Category*>::get(),
                        "get_MappedColors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::UIColorGetter>>*, false>(this, ___internal_method);
}
inline ::StringW VROSC::UI::SkinnableColorsMasterData_Category::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::SkinnableColorsMasterData_Category*>::get(),
                        "get_Name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void VROSC::UI::SkinnableColorsMasterData_Category::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::SkinnableColorsMasterData_Category*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UI::SkinnableColorsMasterData_Category* VROSC::UI::SkinnableColorsMasterData_Category::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::SkinnableColorsMasterData_Category*>());
}
// Ctor Parameters []
constexpr ::VROSC::UI::SkinnableColorsMasterData_Category::SkinnableColorsMasterData_Category()   {
}
//  Writing Method size for method: ::VROSC::UI::SkinnableColorsMasterData.get_Categories
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::UI::SkinnableColorsMasterData_Category*>* (::VROSC::UI::SkinnableColorsMasterData::*)()>(&::VROSC::UI::SkinnableColorsMasterData::get_Categories)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e7758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::SkinnableColorsMasterData*>::get(),
                        "get_Categories",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::SkinnableColorsMasterData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::SkinnableColorsMasterData::*)()>(&::VROSC::UI::SkinnableColorsMasterData::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17e7760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::SkinnableColorsMasterData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::VROSC::UI::SkinnableColorsMasterData_Category*>*& VROSC::UI::SkinnableColorsMasterData::__cordl_internal_get__categories()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____categories;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::UI::SkinnableColorsMasterData_Category*>* const& VROSC::UI::SkinnableColorsMasterData::__cordl_internal_get__categories() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____categories;
}
constexpr void VROSC::UI::SkinnableColorsMasterData::__cordl_internal_set__categories(::System::Collections::Generic::List_1<::VROSC::UI::SkinnableColorsMasterData_Category*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____categories)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::VROSC::UI::SkinnableColorsMasterData_Category*>* VROSC::UI::SkinnableColorsMasterData::get_Categories()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::SkinnableColorsMasterData*>::get(),
                        "get_Categories",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::VROSC::UI::SkinnableColorsMasterData_Category*>*, false>(this, ___internal_method);
}
inline void VROSC::UI::SkinnableColorsMasterData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::SkinnableColorsMasterData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UI::SkinnableColorsMasterData* VROSC::UI::SkinnableColorsMasterData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::SkinnableColorsMasterData*>());
}
// Ctor Parameters []
constexpr ::VROSC::UI::SkinnableColorsMasterData::SkinnableColorsMasterData()   {
}
