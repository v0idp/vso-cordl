#pragma once
// IWYU pragma private; include "VROSC/LoopStationLaunchpadData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__LoopStationLaunchpadData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "VROSC/zzzz__TransformDataController_def.hpp"
#include "VROSC/zzzz__TransformDataModel_def.hpp"
//  Writing Method size for method: ::VROSC::LoopStationLaunchpadData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationLaunchpadData::*)(::StringW, ::StringW, bool)>(&::VROSC::LoopStationLaunchpadData::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x18733d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLaunchpadData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLaunchpadData.get_TransformController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::TransformDataController* (::VROSC::LoopStationLaunchpadData::*)()>(&::VROSC::LoopStationLaunchpadData::get_TransformController)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1873538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLaunchpadData*>::get(),
                        "get_TransformController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& VROSC::LoopStationLaunchpadData::__cordl_internal_get_IsGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsGroup;
}
constexpr bool const& VROSC::LoopStationLaunchpadData::__cordl_internal_get_IsGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsGroup;
}
constexpr void VROSC::LoopStationLaunchpadData::__cordl_internal_set_IsGroup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsGroup = value;
}
constexpr ::StringW& VROSC::LoopStationLaunchpadData::__cordl_internal_get__cordl_ID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_ID;
}
constexpr ::StringW const& VROSC::LoopStationLaunchpadData::__cordl_internal_get__cordl_ID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_ID;
}
constexpr void VROSC::LoopStationLaunchpadData::__cordl_internal_set__cordl_ID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cordl_ID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::LoopStationLaunchpadData::__cordl_internal_get_TargetID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetID;
}
constexpr ::StringW const& VROSC::LoopStationLaunchpadData::__cordl_internal_get_TargetID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetID;
}
constexpr void VROSC::LoopStationLaunchpadData::__cordl_internal_set_TargetID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TargetID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::TransformDataModel*& VROSC::LoopStationLaunchpadData::__cordl_internal_get_TransformData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformData;
}
constexpr ::VROSC::TransformDataModel* const& VROSC::LoopStationLaunchpadData::__cordl_internal_get_TransformData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformData;
}
constexpr void VROSC::LoopStationLaunchpadData::__cordl_internal_set_TransformData(::VROSC::TransformDataModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TransformData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::TransformDataController*& VROSC::LoopStationLaunchpadData::__cordl_internal_get__transformController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformController;
}
constexpr ::VROSC::TransformDataController* const& VROSC::LoopStationLaunchpadData::__cordl_internal_get__transformController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformController;
}
constexpr void VROSC::LoopStationLaunchpadData::__cordl_internal_set__transformController(::VROSC::TransformDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transformController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& VROSC::LoopStationLaunchpadData::__cordl_internal_get_SpatialAnchorsUUIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpatialAnchorsUUIDs;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& VROSC::LoopStationLaunchpadData::__cordl_internal_get_SpatialAnchorsUUIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpatialAnchorsUUIDs;
}
constexpr void VROSC::LoopStationLaunchpadData::__cordl_internal_set_SpatialAnchorsUUIDs(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SpatialAnchorsUUIDs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::LoopStationLaunchpadData::_ctor(::StringW  iD, ::StringW  targetID, bool  isGroup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLaunchpadData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, iD, targetID, isGroup);
}
inline ::VROSC::TransformDataController* VROSC::LoopStationLaunchpadData::get_TransformController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLaunchpadData*>::get(),
                        "get_TransformController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::TransformDataController*, false>(this, ___internal_method);
}
inline ::VROSC::LoopStationLaunchpadData* VROSC::LoopStationLaunchpadData::New_ctor(::StringW  iD, ::StringW  targetID, bool  isGroup)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopStationLaunchpadData*>(iD, targetID, isGroup));
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationLaunchpadData::LoopStationLaunchpadData()   {
}
