#pragma once
// IWYU pragma private; include "VROSC/LoopStationDataViewer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__LoopStationDataViewer_def.hpp"
#include "VROSC/zzzz__LoopStationDataModel_def.hpp"
#include "VROSC/zzzz__LoopStation_def.hpp"
//  Writing Method size for method: ::VROSC::LoopStationDataViewer.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationDataViewer::*)()>(&::VROSC::LoopStationDataViewer::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x187389c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationDataViewer*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationDataViewer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationDataViewer::*)()>(&::VROSC::LoopStationDataViewer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18738b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationDataViewer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::LoopStation>& VROSC::LoopStationDataViewer::__cordl_internal_get__loopStation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopStation;
}
constexpr ::UnityW<::VROSC::LoopStation> const& VROSC::LoopStationDataViewer::__cordl_internal_get__loopStation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopStation;
}
constexpr void VROSC::LoopStationDataViewer::__cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopStation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopStationDataModel*& VROSC::LoopStationDataViewer::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::VROSC::LoopStationDataModel* const& VROSC::LoopStationDataViewer::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void VROSC::LoopStationDataViewer::__cordl_internal_set__data(::VROSC::LoopStationDataModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::LoopStationDataViewer::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationDataViewer*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationDataViewer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationDataViewer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopStationDataViewer* VROSC::LoopStationDataViewer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopStationDataViewer*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationDataViewer::LoopStationDataViewer()   {
}
