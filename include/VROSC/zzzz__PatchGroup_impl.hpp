#pragma once
// IWYU pragma private; include "VROSC/PatchGroup.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "VROSC/zzzz__PatchGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::VROSC::PatchGroup.get_Patches
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* (::VROSC::PatchGroup::*)()>(&::VROSC::PatchGroup::get_Patches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f06b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchGroup*>::get(),
                        "get_Patches",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PatchGroup.GetPatchName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Object*)>(&::VROSC::PatchGroup::GetPatchName)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x16f06c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchGroup*>::get(),
                        "GetPatchName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PatchGroup.PatchIsDrums
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Object*)>(&::VROSC::PatchGroup::PatchIsDrums)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x16f0768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchGroup*>::get(),
                        "PatchIsDrums",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PatchGroup._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PatchGroup::*)()>(&::VROSC::PatchGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f07e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchGroup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& VROSC::PatchGroup::__cordl_internal_get__patches()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____patches;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& VROSC::PatchGroup::__cordl_internal_get__patches() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____patches;
}
constexpr void VROSC::PatchGroup::__cordl_internal_set__patches(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____patches)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* VROSC::PatchGroup::get_Patches()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchGroup*>::get(),
                        "get_Patches",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*, false>(this, ___internal_method);
}
inline ::StringW VROSC::PatchGroup::GetPatchName(::System::Object*  patch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchGroup*>::get(),
                        "GetPatchName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, patch);
}
inline bool VROSC::PatchGroup::PatchIsDrums(::System::Object*  patch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchGroup*>::get(),
                        "PatchIsDrums",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, patch);
}
inline void VROSC::PatchGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchGroup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::PatchGroup* VROSC::PatchGroup::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::PatchGroup*>());
}
// Ctor Parameters []
constexpr ::VROSC::PatchGroup::PatchGroup()   {
}
