#pragma once
// IWYU pragma private; include "System/Data/DataView.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_impl.hpp"
#include "System/Collections/zzzz__ICollection_impl.hpp"
#include "System/Collections/zzzz__IEnumerable_impl.hpp"
#include "System/Collections/zzzz__IList_impl.hpp"
#include "System/ComponentModel/zzzz__IBindingList_impl.hpp"
#include "System/ComponentModel/zzzz__MarshalByValueComponent_impl.hpp"
#include "System/Data/zzzz__DataViewRowState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__DataView_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/ComponentModel/zzzz__CollectionChangeEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__ListChangedEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__ListChangedEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__ListChangedType_def.hpp"
#include "System/Data/zzzz__DataRowView_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__DataViewListener_def.hpp"
#include "System/Data/zzzz__DataViewManager_def.hpp"
#include "System/Data/zzzz__DataViewRowState_def.hpp"
#include "System/Data/zzzz__DataView_def.hpp"
#include "System/Data/zzzz__IFilter_def.hpp"
#include "System/Data/zzzz__Index_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::DataView_DataRowReferenceComparer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView_DataRowReferenceComparer::*)()>(&::System::Data::DataView_DataRowReferenceComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a65e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView_DataRowReferenceComparer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView_DataRowReferenceComparer.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataView_DataRowReferenceComparer::*)(::System::Data::DataRow*, ::System::Data::DataRow*)>(&::System::Data::DataView_DataRowReferenceComparer::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a65e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView_DataRowReferenceComparer*>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView_DataRowReferenceComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataView_DataRowReferenceComparer::*)(::System::Data::DataRow*)>(&::System::Data::DataView_DataRowReferenceComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a65e40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView_DataRowReferenceComparer*>::get(),
                        "GetHashCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::Data::DataView_DataRowReferenceComparer::setStaticF_s_default(::System::Data::DataView_DataRowReferenceComparer*  value)  {
::cordl_internals::setStaticField<::System::Data::DataView_DataRowReferenceComparer*, "s_default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView_DataRowReferenceComparer*>::get>(std::forward<::System::Data::DataView_DataRowReferenceComparer*>(value));
}
inline ::System::Data::DataView_DataRowReferenceComparer* System::Data::DataView_DataRowReferenceComparer::getStaticF_s_default()  {
return ::cordl_internals::getStaticField<::System::Data::DataView_DataRowReferenceComparer*, "s_default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView_DataRowReferenceComparer*>::get>();
}
inline void System::Data::DataView_DataRowReferenceComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView_DataRowReferenceComparer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Data::DataView_DataRowReferenceComparer::Equals(::System::Data::DataRow*  x, ::System::Data::DataRow*  y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView_DataRowReferenceComparer*>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x, y);
}
inline int32_t System::Data::DataView_DataRowReferenceComparer::GetHashCode(::System::Data::DataRow*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView_DataRowReferenceComparer*>::get(),
                        "GetHashCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
inline ::System::Data::DataView_DataRowReferenceComparer* System::Data::DataView_DataRowReferenceComparer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::DataView_DataRowReferenceComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::Data::DataRow*>"
constexpr  System::Data::DataView_DataRowReferenceComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::System::Data::DataRow*>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Data::DataRow*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::Data::DataRow*>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::Data::DataRow*>* System::Data::DataView_DataRowReferenceComparer::i___System__Collections__Generic__IEqualityComparer_1___System__Data__DataRow__() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Data::DataRow*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Data::DataView_DataRowReferenceComparer::DataView_DataRowReferenceComparer()   {
}
//  Writing Method size for method: ::System::Data::DataView._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(::System::Data::DataTable*, bool)>(&::System::Data::DataView::_ctor)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x2a62de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_AllowDelete
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataView::*)()>(&::System::Data::DataView::get_AllowDelete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a632e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_AllowDelete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_AllowNew
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataView::*)()>(&::System::Data::DataView::get_AllowNew)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a632e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_AllowNew",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_Count
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataView::*)()>(&::System::Data::DataView::get_Count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2a632f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_Count",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_CountFromIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataView::*)()>(&::System::Data::DataView::get_CountFromIndex)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a63340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_CountFromIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_DataViewManager
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataViewManager* (::System::Data::DataView::*)()>(&::System::Data::DataView::get_DataViewManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6335c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_DataViewManager",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_IsOpen
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataView::*)()>(&::System::Data::DataView::get_IsOpen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a63364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_IsOpen",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_ICollection_get_IsSynchronized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataView::*)()>(&::System::Data::DataView::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6336c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.ICollection.get_IsSynchronized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_RowStateFilter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataViewRowState (::System::Data::DataView::*)()>(&::System::Data::DataView::get_RowStateFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a63374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_RowStateFilter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_Sort
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::DataView::*)()>(&::System::Data::DataView::get_Sort)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2a6337c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_Sort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_SortComparison
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Comparison_1<::System::Data::DataRow*>* (::System::Data::DataView::*)()>(&::System::Data::DataView::get_SortComparison)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a633d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_SortComparison",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_ICollection_get_SyncRoot
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::DataView::*)()>(&::System::Data::DataView::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a633d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.ICollection.get_SyncRoot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_Table
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (::System::Data::DataView::*)()>(&::System::Data::DataView::get_Table)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a633dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_Table",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_IList_get_Item
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::DataView::*)(int32_t)>(&::System::Data::DataView::System_Collections_IList_get_Item)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a633e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.IList.get_Item",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_IList_set_Item
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(int32_t, ::System::Object*)>(&::System::Data::DataView::System_Collections_IList_set_Item)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a6341c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.IList.set_Item",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_Item
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRowView* (::System::Data::DataView::*)(int32_t)>(&::System::Data::DataView::get_Item)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a63400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_Item",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.AddNew
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRowView* (::System::Data::DataView::*)()>(&::System::Data::DataView::AddNew)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x2a63538;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.CheckOpen
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)()>(&::System::Data::DataView::CheckOpen)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2a6380c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "CheckOpen",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.Close
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)()>(&::System::Data::DataView::Close)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2a63914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "Close",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.CopyTo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(::System::Array*, int32_t)>(&::System::Data::DataView::CopyTo)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2a63968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "CopyTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.CopyTo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(::ArrayW<::System::Data::DataRowView*,::Array<::System::Data::DataRowView*>*>, int32_t)>(&::System::Data::DataView::CopyTo)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2a63aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "CopyTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataRowView*,::Array<::System::Data::DataRowView*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.Delete
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(int32_t)>(&::System::Data::DataView::Delete)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a63c98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "Delete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.Delete
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(::System::Data::DataRow*)>(&::System::Data::DataView::Delete)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2a63cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "Delete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(bool)>(&::System::Data::DataView::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2a64024;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.FinishAddNew
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(bool)>(&::System::Data::DataView::FinishAddNew)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2a63e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "FinishAddNew",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.GetEnumerator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Data::DataView::*)()>(&::System::Data::DataView::GetEnumerator)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2a64058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_IList_get_IsReadOnly
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataView::*)()>(&::System::Data::DataView::System_Collections_IList_get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a640d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.IList.get_IsReadOnly",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_IList_get_IsFixedSize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataView::*)()>(&::System::Data::DataView::System_Collections_IList_get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a640dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.IList.get_IsFixedSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_IList_Add
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataView::*)(::System::Object*)>(&::System::Data::DataView::System_Collections_IList_Add)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2a640e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.IList.Add",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_IList_Clear
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)()>(&::System::Data::DataView::System_Collections_IList_Clear)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a64138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.IList.Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_IList_Contains
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataView::*)(::System::Object*)>(&::System::Data::DataView::System_Collections_IList_Contains)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2a64160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.IList.Contains",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_IList_IndexOf
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataView::*)(::System::Object*)>(&::System::Data::DataView::System_Collections_IList_IndexOf)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2a641ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.IList.IndexOf",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.IndexOf
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataView::*)(::System::Data::DataRowView*)>(&::System::Data::DataView::IndexOf)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2a63844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "IndexOf",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowView*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.IndexOfDataRowView
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataView::*)(::System::Data::DataRowView*)>(&::System::Data::DataView::IndexOfDataRowView)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a6426c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "IndexOfDataRowView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowView*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_IList_Insert
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(int32_t, ::System::Object*)>(&::System::Data::DataView::System_Collections_IList_Insert)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a642c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.IList.Insert",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_IList_Remove
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(::System::Object*)>(&::System::Data::DataView::System_Collections_IList_Remove)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2a642ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.IList.Remove",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_IList_RemoveAt
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(int32_t)>(&::System::Data::DataView::System_Collections_IList_RemoveAt)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a6440c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.IList.RemoveAt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.GetFilter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::IFilter* (::System::Data::DataView::*)()>(&::System::Data::DataView::GetFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a64428;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.GetRecord
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataView::*)(int32_t)>(&::System::Data::DataView::GetRecord)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2a64430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "GetRecord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.GetRow
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRow* (::System::Data::DataView::*)(int32_t)>(&::System::Data::DataView::GetRow)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2a63444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "GetRow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.GetRowView
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRowView* (::System::Data::DataView::*)(int32_t)>(&::System::Data::DataView::GetRowView)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2a63ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "GetRowView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.GetRowView
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRowView* (::System::Data::DataView::*)(::System::Data::DataRow*)>(&::System::Data::DataView::GetRowView)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a634e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "GetRowView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.IndexListChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(::System::Object*, ::System::ComponentModel::ListChangedEventArgs*)>(&::System::Data::DataView::IndexListChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2a644b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.IndexListChangedInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(::System::ComponentModel::ListChangedEventArgs*)>(&::System::Data::DataView::IndexListChangedInternal)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2a64548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "IndexListChangedInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.MaintainDataView
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(::System::ComponentModel::ListChangedType, ::System::Data::DataRow*, bool)>(&::System::Data::DataView::MaintainDataView)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2a645f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "MaintainDataView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.OnListChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(::System::ComponentModel::ListChangedEventArgs*)>(&::System::Data::DataView::OnListChanged)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x2a64a88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)()>(&::System::Data::DataView::Reset)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a64da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.ResetRowViewCache
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)()>(&::System::Data::DataView::ResetRowViewCache)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2a6484c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "ResetRowViewCache",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.SetDataViewManager
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(::System::Data::DataViewManager*)>(&::System::Data::DataView::SetDataViewManager)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2a64dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "SetDataViewManager",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewManager*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.SetIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(::StringW, ::System::Data::DataViewRowState, ::System::Data::IFilter*)>(&::System::Data::DataView::SetIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a64fec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.SetIndex2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(::StringW, ::System::Data::DataViewRowState, ::System::Data::IFilter*, bool)>(&::System::Data::DataView::SetIndex2)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x2a64ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "SetIndex2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::IFilter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.UpdateIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)()>(&::System::Data::DataView::UpdateIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a6394c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "UpdateIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.UpdateIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(bool)>(&::System::Data::DataView::UpdateIndex)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a65544;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.UpdateIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(bool, bool)>(&::System::Data::DataView::UpdateIndex)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x2a6522c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "UpdateIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.ChildRelationCollectionChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*)>(&::System::Data::DataView::ChildRelationCollectionChanged)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2a65730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "ChildRelationCollectionChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.ParentRelationCollectionChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*)>(&::System::Data::DataView::ParentRelationCollectionChanged)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2a65954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "ParentRelationCollectionChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.ColumnCollectionChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*)>(&::System::Data::DataView::ColumnCollectionChanged)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2a65b78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.ColumnCollectionChangedInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataView::*)(::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*)>(&::System::Data::DataView::ColumnCollectionChangedInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a65d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "ColumnCollectionChangedInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_ObjectID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataView::*)()>(&::System::Data::DataView::get_ObjectID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a65dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_ObjectID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataViewManager*& System::Data::DataView::__cordl_internal_get__dataViewManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataViewManager;
}
constexpr ::System::Data::DataViewManager* const& System::Data::DataView::__cordl_internal_get__dataViewManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataViewManager;
}
constexpr void System::Data::DataView::__cordl_internal_set__dataViewManager(::System::Data::DataViewManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataViewManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataTable*& System::Data::DataView::__cordl_internal_get__table()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____table;
}
constexpr ::System::Data::DataTable* const& System::Data::DataView::__cordl_internal_get__table() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____table;
}
constexpr void System::Data::DataView::__cordl_internal_set__table(::System::Data::DataTable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____table)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Data::DataView::__cordl_internal_get__locked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locked;
}
constexpr bool const& System::Data::DataView::__cordl_internal_get__locked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locked;
}
constexpr void System::Data::DataView::__cordl_internal_set__locked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____locked = value;
}
constexpr ::System::Data::Index*& System::Data::DataView::__cordl_internal_get__index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr ::System::Data::Index* const& System::Data::DataView::__cordl_internal_get__index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr void System::Data::DataView::__cordl_internal_set__index(::System::Data::Index*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____index)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Data::Index*>*& System::Data::DataView::__cordl_internal_get__findIndexes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____findIndexes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Data::Index*>* const& System::Data::DataView::__cordl_internal_get__findIndexes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____findIndexes;
}
constexpr void System::Data::DataView::__cordl_internal_set__findIndexes(::System::Collections::Generic::Dictionary_2<::StringW,::System::Data::Index*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____findIndexes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Data::DataView::__cordl_internal_get__sort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sort;
}
constexpr ::StringW const& System::Data::DataView::__cordl_internal_get__sort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sort;
}
constexpr void System::Data::DataView::__cordl_internal_set__sort(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sort)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Comparison_1<::System::Data::DataRow*>*& System::Data::DataView::__cordl_internal_get__comparison()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comparison;
}
constexpr ::System::Comparison_1<::System::Data::DataRow*>* const& System::Data::DataView::__cordl_internal_get__comparison() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comparison;
}
constexpr void System::Data::DataView::__cordl_internal_set__comparison(::System::Comparison_1<::System::Data::DataRow*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____comparison)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::IFilter*& System::Data::DataView::__cordl_internal_get__rowFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rowFilter;
}
constexpr ::System::Data::IFilter* const& System::Data::DataView::__cordl_internal_get__rowFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rowFilter;
}
constexpr void System::Data::DataView::__cordl_internal_set__rowFilter(::System::Data::IFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rowFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataViewRowState& System::Data::DataView::__cordl_internal_get__recordStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordStates;
}
constexpr ::System::Data::DataViewRowState const& System::Data::DataView::__cordl_internal_get__recordStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordStates;
}
constexpr void System::Data::DataView::__cordl_internal_set__recordStates(::System::Data::DataViewRowState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordStates = value;
}
constexpr bool& System::Data::DataView::__cordl_internal_get__shouldOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldOpen;
}
constexpr bool const& System::Data::DataView::__cordl_internal_get__shouldOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldOpen;
}
constexpr void System::Data::DataView::__cordl_internal_set__shouldOpen(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shouldOpen = value;
}
constexpr bool& System::Data::DataView::__cordl_internal_get__open()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____open;
}
constexpr bool const& System::Data::DataView::__cordl_internal_get__open() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____open;
}
constexpr void System::Data::DataView::__cordl_internal_set__open(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____open = value;
}
constexpr bool& System::Data::DataView::__cordl_internal_get__allowNew()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowNew;
}
constexpr bool const& System::Data::DataView::__cordl_internal_get__allowNew() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowNew;
}
constexpr void System::Data::DataView::__cordl_internal_set__allowNew(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowNew = value;
}
constexpr bool& System::Data::DataView::__cordl_internal_get__allowEdit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowEdit;
}
constexpr bool const& System::Data::DataView::__cordl_internal_get__allowEdit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowEdit;
}
constexpr void System::Data::DataView::__cordl_internal_set__allowEdit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowEdit = value;
}
constexpr bool& System::Data::DataView::__cordl_internal_get__allowDelete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowDelete;
}
constexpr bool const& System::Data::DataView::__cordl_internal_get__allowDelete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowDelete;
}
constexpr void System::Data::DataView::__cordl_internal_set__allowDelete(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowDelete = value;
}
constexpr bool& System::Data::DataView::__cordl_internal_get__applyDefaultSort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applyDefaultSort;
}
constexpr bool const& System::Data::DataView::__cordl_internal_get__applyDefaultSort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applyDefaultSort;
}
constexpr void System::Data::DataView::__cordl_internal_set__applyDefaultSort(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____applyDefaultSort = value;
}
constexpr ::System::Data::DataRow*& System::Data::DataView::__cordl_internal_get__addNewRow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addNewRow;
}
constexpr ::System::Data::DataRow* const& System::Data::DataView::__cordl_internal_get__addNewRow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addNewRow;
}
constexpr void System::Data::DataView::__cordl_internal_set__addNewRow(::System::Data::DataRow*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____addNewRow)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::ListChangedEventArgs*& System::Data::DataView::__cordl_internal_get__addNewMoved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addNewMoved;
}
constexpr ::System::ComponentModel::ListChangedEventArgs* const& System::Data::DataView::__cordl_internal_get__addNewMoved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addNewMoved;
}
constexpr void System::Data::DataView::__cordl_internal_set__addNewMoved(::System::ComponentModel::ListChangedEventArgs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____addNewMoved)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::ListChangedEventHandler*& System::Data::DataView::__cordl_internal_get__onListChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onListChanged;
}
constexpr ::System::ComponentModel::ListChangedEventHandler* const& System::Data::DataView::__cordl_internal_get__onListChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onListChanged;
}
constexpr void System::Data::DataView::__cordl_internal_set__onListChanged(::System::ComponentModel::ListChangedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onListChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataViewRowState& System::Data::DataView::__cordl_internal_get__delayedRecordStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayedRecordStates;
}
constexpr ::System::Data::DataViewRowState const& System::Data::DataView::__cordl_internal_get__delayedRecordStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayedRecordStates;
}
constexpr void System::Data::DataView::__cordl_internal_set__delayedRecordStates(::System::Data::DataViewRowState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delayedRecordStates = value;
}
constexpr bool& System::Data::DataView::__cordl_internal_get__fEndInitInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fEndInitInProgress;
}
constexpr bool const& System::Data::DataView::__cordl_internal_get__fEndInitInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fEndInitInProgress;
}
constexpr void System::Data::DataView::__cordl_internal_set__fEndInitInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fEndInitInProgress = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*,::System::Data::DataRowView*>*& System::Data::DataView::__cordl_internal_get__rowViewCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rowViewCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*,::System::Data::DataRowView*>* const& System::Data::DataView::__cordl_internal_get__rowViewCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rowViewCache;
}
constexpr void System::Data::DataView::__cordl_internal_set__rowViewCache(::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*,::System::Data::DataRowView*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rowViewCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*,::System::Data::DataRowView*>*& System::Data::DataView::__cordl_internal_get__rowViewBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rowViewBuffer;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*,::System::Data::DataRowView*>* const& System::Data::DataView::__cordl_internal_get__rowViewBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rowViewBuffer;
}
constexpr void System::Data::DataView::__cordl_internal_set__rowViewBuffer(::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*,::System::Data::DataRowView*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rowViewBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataViewListener*& System::Data::DataView::__cordl_internal_get__dvListener()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dvListener;
}
constexpr ::System::Data::DataViewListener* const& System::Data::DataView::__cordl_internal_get__dvListener() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dvListener;
}
constexpr void System::Data::DataView::__cordl_internal_set__dvListener(::System::Data::DataViewListener*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dvListener)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Data::DataView::__cordl_internal_get__objectID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectID;
}
constexpr int32_t const& System::Data::DataView::__cordl_internal_get__objectID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectID;
}
constexpr void System::Data::DataView::__cordl_internal_set__objectID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____objectID = value;
}
inline void System::Data::DataView::setStaticF_s_resetEventArgs(::System::ComponentModel::ListChangedEventArgs*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::ListChangedEventArgs*, "s_resetEventArgs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get>(std::forward<::System::ComponentModel::ListChangedEventArgs*>(value));
}
inline ::System::ComponentModel::ListChangedEventArgs* System::Data::DataView::getStaticF_s_resetEventArgs()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::ListChangedEventArgs*, "s_resetEventArgs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get>();
}
inline void System::Data::DataView::setStaticF_s_objectTypeCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_objectTypeCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Data::DataView::getStaticF_s_objectTypeCount()  {
return ::cordl_internals::getStaticField<int32_t, "s_objectTypeCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get>();
}
inline void System::Data::DataView::_ctor(::System::Data::DataTable*  table, bool  locked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table, locked);
}
inline bool System::Data::DataView::get_AllowDelete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_AllowDelete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Data::DataView::get_AllowNew()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_AllowNew",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Data::DataView::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_Count",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Data::DataView::get_CountFromIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_CountFromIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Data::DataViewManager* System::Data::DataView::get_DataViewManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_DataViewManager",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataViewManager*, false>(this, ___internal_method);
}
inline bool System::Data::DataView::get_IsOpen()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_IsOpen",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Data::DataView::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.ICollection.get_IsSynchronized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Data::DataViewRowState System::Data::DataView::get_RowStateFilter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_RowStateFilter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataViewRowState, false>(this, ___internal_method);
}
inline ::StringW System::Data::DataView::get_Sort()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_Sort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Comparison_1<::System::Data::DataRow*>* System::Data::DataView::get_SortComparison()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_SortComparison",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Comparison_1<::System::Data::DataRow*>*, false>(this, ___internal_method);
}
inline ::System::Object* System::Data::DataView::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.ICollection.get_SyncRoot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Data::DataTable* System::Data::DataView::get_Table()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_Table",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*, false>(this, ___internal_method);
}
inline ::System::Object* System::Data::DataView::System_Collections_IList_get_Item(int32_t  recordIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.IList.get_Item",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, recordIndex);
}
inline void System::Data::DataView::System_Collections_IList_set_Item(int32_t  recordIndex, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.IList.set_Item",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recordIndex, value);
}
inline ::System::Data::DataRowView* System::Data::DataView::get_Item(int32_t  recordIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_Item",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowView*, false>(this, ___internal_method, recordIndex);
}
inline ::System::Data::DataRowView* System::Data::DataView::AddNew()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                    26
                )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowView*, false>(this, ___internal_method);
}
inline void System::Data::DataView::CheckOpen()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "CheckOpen",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::DataView::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "Close",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::DataView::CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "CopyTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
inline void System::Data::DataView::CopyTo(::ArrayW<::System::Data::DataRowView*,::Array<::System::Data::DataRowView*>*>  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "CopyTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataRowView*,::Array<::System::Data::DataRowView*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
inline void System::Data::DataView::Delete(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "Delete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void System::Data::DataView::Delete(::System::Data::DataRow*  row)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "Delete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row);
}
inline void System::Data::DataView::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::Data::DataView::FinishAddNew(bool  success)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "FinishAddNew",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, success);
}
inline ::System::Collections::IEnumerator* System::Data::DataView::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline bool System::Data::DataView::System_Collections_IList_get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.IList.get_IsReadOnly",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Data::DataView::System_Collections_IList_get_IsFixedSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.IList.get_IsFixedSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Data::DataView::System_Collections_IList_Add(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.IList.Add",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
inline void System::Data::DataView::System_Collections_IList_Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.IList.Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Data::DataView::System_Collections_IList_Contains(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.IList.Contains",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline int32_t System::Data::DataView::System_Collections_IList_IndexOf(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.IList.IndexOf",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
inline int32_t System::Data::DataView::IndexOf(::System::Data::DataRowView*  rowview)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "IndexOf",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowView*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, rowview);
}
inline int32_t System::Data::DataView::IndexOfDataRowView(::System::Data::DataRowView*  rowview)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "IndexOfDataRowView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowView*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, rowview);
}
inline void System::Data::DataView::System_Collections_IList_Insert(int32_t  index, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.IList.Insert",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
inline void System::Data::DataView::System_Collections_IList_Remove(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.IList.Remove",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Data::DataView::System_Collections_IList_RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "System.Collections.IList.RemoveAt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline ::System::Data::IFilter* System::Data::DataView::GetFilter()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                    27
                )));
return ::cordl_internals::RunMethodRethrow<::System::Data::IFilter*, false>(this, ___internal_method);
}
inline int32_t System::Data::DataView::GetRecord(int32_t  recordIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "GetRecord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, recordIndex);
}
inline ::System::Data::DataRow* System::Data::DataView::GetRow(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "GetRow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*, false>(this, ___internal_method, index);
}
inline ::System::Data::DataRowView* System::Data::DataView::GetRowView(int32_t  record)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "GetRowView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowView*, false>(this, ___internal_method, record);
}
inline ::System::Data::DataRowView* System::Data::DataView::GetRowView(::System::Data::DataRow*  dr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "GetRowView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowView*, false>(this, ___internal_method, dr);
}
inline void System::Data::DataView::IndexListChanged(::System::Object*  sender, ::System::ComponentModel::ListChangedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                    28
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
inline void System::Data::DataView::IndexListChangedInternal(::System::ComponentModel::ListChangedEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "IndexListChangedInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void System::Data::DataView::MaintainDataView(::System::ComponentModel::ListChangedType  changedType, ::System::Data::DataRow*  row, bool  trackAddRemove)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "MaintainDataView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, changedType, row, trackAddRemove);
}
inline void System::Data::DataView::OnListChanged(::System::ComponentModel::ListChangedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                    29
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void System::Data::DataView::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::DataView::ResetRowViewCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "ResetRowViewCache",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::DataView::SetDataViewManager(::System::Data::DataViewManager*  dataViewManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "SetDataViewManager",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewManager*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataViewManager);
}
inline void System::Data::DataView::SetIndex(::StringW  newSort, ::System::Data::DataViewRowState  newRowStates, ::System::Data::IFilter*  newRowFilter)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                    30
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newSort, newRowStates, newRowFilter);
}
inline void System::Data::DataView::SetIndex2(::StringW  newSort, ::System::Data::DataViewRowState  newRowStates, ::System::Data::IFilter*  newRowFilter, bool  fireEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "SetIndex2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::IFilter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newSort, newRowStates, newRowFilter, fireEvent);
}
inline void System::Data::DataView::UpdateIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "UpdateIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::DataView::UpdateIndex(bool  force)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                    31
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, force);
}
inline void System::Data::DataView::UpdateIndex(bool  force, bool  fireEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "UpdateIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, force, fireEvent);
}
inline void System::Data::DataView::ChildRelationCollectionChanged(::System::Object*  sender, ::System::ComponentModel::CollectionChangeEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "ChildRelationCollectionChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
inline void System::Data::DataView::ParentRelationCollectionChanged(::System::Object*  sender, ::System::ComponentModel::CollectionChangeEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "ParentRelationCollectionChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
inline void System::Data::DataView::ColumnCollectionChanged(::System::Object*  sender, ::System::ComponentModel::CollectionChangeEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                    32
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
inline void System::Data::DataView::ColumnCollectionChangedInternal(::System::Object*  sender, ::System::ComponentModel::CollectionChangeEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "ColumnCollectionChangedInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
inline int32_t System::Data::DataView::get_ObjectID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataView*>::get(),
                        "get_ObjectID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Data::DataView* System::Data::DataView::New_ctor(::System::Data::DataTable*  table, bool  locked)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::DataView*>(table, locked));
}
/// @brief Convert operator to "::System::ComponentModel::IBindingList"
constexpr  System::Data::DataView::operator ::System::ComponentModel::IBindingList*() noexcept {
return static_cast<::System::ComponentModel::IBindingList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::IBindingList"
constexpr ::System::ComponentModel::IBindingList* System::Data::DataView::i___System__ComponentModel__IBindingList() noexcept {
return static_cast<::System::ComponentModel::IBindingList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IList"
constexpr  System::Data::DataView::operator ::System::Collections::IList*() noexcept {
return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* System::Data::DataView::i___System__Collections__IList() noexcept {
return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr  System::Data::DataView::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Data::DataView::i___System__Collections__ICollection() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  System::Data::DataView::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Data::DataView::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Data::DataView::DataView()   {
}
